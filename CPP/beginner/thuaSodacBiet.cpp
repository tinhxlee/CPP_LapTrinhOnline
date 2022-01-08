#include<bits/stdc++.h>
using namespace std;
int main() {
    int n, a[100], d = 0;
    cin >> n ;
    for(int i = 0 ; i < n ; i ++){
        cin >> a[i];
    }
    for(int i = 0 ; i < n ; i ++){
        for(int j = 1 ; j <= a[i]; j ++){
            if(a[i] % j == 0) d ++; 
        }
        cout << "#Case " << i + 1 << ": " << d << "\n";
        d = 0;
    }
}