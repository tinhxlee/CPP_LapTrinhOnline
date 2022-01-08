#include<iostream>
using namespace std;
int main(){
    int a, b;
    cin >> a >> b ;
    if(a + b < 24) cout << a + b;
    else if( a + b == 24) cout << 0;
    else cout << (a + b) -  24;
}