#include<bits/stdc++.h>
using namespace std ;
int main(){
    int n,res = 0;
    cin >> n ;
    int *a = new int[n + 1];
    for(int i = 0 ; i < n ; i ++) cin >> a[i];
    int k = n/2 ;
    sort(a, a + n);
    for(int i = 0; i < n ; i ++)
    {
        res += abs(a[k] - a[i]);
    }
    cout << res ;
}