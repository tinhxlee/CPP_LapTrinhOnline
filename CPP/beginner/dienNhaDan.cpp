#include<bits/stdc++.h>
using namespace std;
int main() {
    int n;
    cin >> n ;
    if(n < 50) cout << 100 * n;
    if(n >= 50 and n < 1000) cout << 500 * n;
    if(n >= 1000 and n < 10000) cout << 1000 * n;
    if(n >= 10000) cout << 1200 * n ;
}