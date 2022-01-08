#include<bits/stdc++.h>
using namespace std;
int main(){
    int n, t = 0, d = 0;
    cin >> n;
    int a[100];
    for(int i = 0; i < n; i ++){
        cin >> a[i];
    }
    for(int i = 0 ; i < n ; i ++){
        t += a[i];
    }
    for(int i = 0 ; i < n ; i ++){
        d += pow(a[i] - round((double)t/n),2);
    }
    cout << d;
}