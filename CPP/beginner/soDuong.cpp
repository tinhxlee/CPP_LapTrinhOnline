#include<bits/stdc++.h>
using namespace std;
int main() {
    double a[10], d = 0;
    for(int i = 0 ; i < 6 ; i ++){
        cin >> a[i];
        if(a[i] > 0) d++ ;
    }
    cout << d << " so duong" ;
}