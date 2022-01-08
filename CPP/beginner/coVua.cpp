#include<bits/stdc++.h>
using namespace std;
int main(){
    char c[100];
    int n, d = 0;
    cin >> n ;
    for(int i = 0 ; i < n ; i ++){
        cin >> c[i];
    }
    for(int i = 0 ; i < n ; i ++){
        if(c[i] == 't') d += 1;
        if(c[i] == 'M') d += 3;
        if(c[i] == 'T') d += 3;
        if(c[i] == 'X') d += 5;
        if(c[i] == 'H') d += 9;
        if(c[i] == 'V') d += 0;
    }
    cout << d;
}