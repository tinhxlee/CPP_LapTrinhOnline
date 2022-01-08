#include<bits/stdc++.h>
using namespace std;
int main(){
    int n1, n2, a[100], d = 0 ;
    cin >> n1;
    vector<int> V(n1);
    for(auto &v:V) cin >> v ;
    cin >> n2 ;
    for(int i = 0 ; i < n2 ; i ++){
        cin >> a[i];
    }
    for(int i = 0 ; i < n2 ; i ++){
        for(vector<int>::iterator it = V.begin() ;it != V.end(); it ++){
            if(a[i] > *it) {
                V.insert(it,a[i]);
            }
            if(a[i] < *it) d++ ;
        }
        cout << d << "\n";
        d = 0;
    }
    
}