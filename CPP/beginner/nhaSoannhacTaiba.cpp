#include<iostream>
using namespace std;
int main() {
    int a[10], dG = 0, dT = 0;
    for(int i = 0; i < 8; i ++) cin >> a[i];
    for(int i = 0 ; i < 7; i++){
        if(a[i] < a[i + 1]) dT ++;
        if(a[i] > a[i + 1]) dG ++;
    }
    if(dT == 7) cout << "TANG";
    if(dG == 7) cout << "GIAM";
    if(dT != 7 && dG != 7) cout << "KHONGBIET";
}