#include<bits/stdc++.h>
using namespace std;
int main() {
    int n;
    cin >> n;
    map<int,int> M ;
    for(int i = 0 ; i < n ; i ++){
        int m ;
        cin >> m ;
        M[m] ++ ;
    }
    for(auto m:M) cout << m.first << " xuat hien " << m.second << " lan\n";
}