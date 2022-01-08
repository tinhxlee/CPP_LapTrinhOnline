#include<iostream>
#include<vector>
using namespace std ;
int main(){
    int n ;
    cin >> n ;
    vector<int> V(n);
    for(int i = 1 ; i <= n ; i ++){
        cout << i;
        V.push_back(i);
    }
    cout << "\n";for(auto v:V) cout << v ;
}