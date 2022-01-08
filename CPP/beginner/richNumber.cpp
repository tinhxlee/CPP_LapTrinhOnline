#include<bits/stdc++.h>
using namespace std;
int main(){
    int n, d = 0;
    cin >> n ;
    if(n < 1){
        cout << "Poor Number";
        return 0;
    }
    for(int i = 1 ; i < n ; i ++){
        if(n % i == 0) d += i ;
    }
    if(d > n) cout << "Rich Number";
    else cout << "Poor Number";
}