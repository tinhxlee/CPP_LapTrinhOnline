#include<bits/stdc++.h>
using namespace std;
int main() {
    int P[100], S[100],a,b,n ;
    cin >> n ;
    for(int i = 0 ; i < n ; i ++){
        cin >> P[i] >> S[i];
    }
    for(int i = 0 ; i < n ; i ++){
        int delta = pow(P[i]/2,2) + 4 * S[i] ;
        if(delta < 0) cout << "khong ton tai hinh chu nhat\n";
        if(delta > 0){
            b = ((-P[i]/2) + sqrt(delta))/2;
            a = P[i]/b ;
            cout << a << b << "\n";
        }       
    }
    
   
}