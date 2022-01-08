#include<bits/stdc++.h>
using namespace std;
int main(){
    int n ;
    cin >> n ;
    int a[100];
    for(int i = 0 ; i < n ; i ++){
        cin >> a[i];
    }
    for(int i = 0 ; i < n ; i ++){
        bool check = false ;
        for(int j = 2 ; j <= sqrt(a[i]) ; j ++){
            if((a[i] % (j * j)) == 0) { cout << j << " " << a[i]/(j * j) << "\n"; check = true ;}
        }
        if(check == false) cout << 1 << " " << a[i] << "\n";
    }
}