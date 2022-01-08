#include<bits/stdc++.h>
using namespace std;
int main() {
    int n, P[100], S[100] ;
    bool check = false;
    cin >> n ;
    for(int i = 0 ; i < n ; i ++){
        cin >> P[i] >> S[i];
    }
    for(int i = n - 1 ; i > 0 ; i --){
            for(int j = 1 ; j <= sqrt(S[i]) ; j ++){
                if(S[i] % j == 0 and 2*(j + S[i]/j) == P[i]){
                    cout << j << " " << S[i] / j << "\n" ;
                    check = true ;
                    break ;
                }
            }
            if(check == false) cout << "khong ton tai hinh chu nhat\n";
    }
}