#include<iostream>
using namespace std;
int main(){
    int n, m,d = 0;
    cin >> n >> m;
    char ca[n + 1],cb[m + 1];
    for(int i = 0 ; i < n ; i ++){
        for(int j = 0 ; j < n ; j ++){
            cin >> ca[j];
        }
    }
    for(int i = 0 ; i < m ; i ++){
        for(int j = 0 ; j < m ; j ++){
            cin >> cb[j];
        }
    }
    for(int i = 0 ; i < n ; i ++){
        for(int j = 0 ; j < n ; j ++){
            if(ca[j] == cb[j]) d++;
        }
    }
    if(d > 0) cout << "dung";
    else cout << "sai";
}