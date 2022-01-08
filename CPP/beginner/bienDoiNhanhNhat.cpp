#include<bits/stdc++.h>
using namespace std;
int main() {
    int n, m, d = 0;
    cin >> n >> m;
    while(n != m){
        n *=2 ;
        d ++ ;
        n -= 1;
        d ++;
    }
    cout << d ;
}