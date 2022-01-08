#include<bits/stdc++.h>
using namespace std;
int main(){
    int n, a[100], d = 0;
    cin >> n ;
    for(int i = 0 ; i < n ; i ++){
        cin >> a[i];
    }
    for(int i = 0 ; i < n ; i ++){
        for(int j = 2 ; j < a[i] ; j ++){
            if(a[i] % j == 0) d ++ ;
        }
        if(d == 0 and a[i] != 1) cout << a[i] << " ";
        d = 0;
    }
}