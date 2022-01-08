#include<iostream>
using namespace std;
int main(){
    int n;
    cin >> n;
    if(n >= 1){
        if(n % 9 == 0){
            cout << n/9;
            return 0;
        }
        if((n/9.0 - n/9) < 1) cout << n/9 + 1;
        else cout << n/9;
    }
}