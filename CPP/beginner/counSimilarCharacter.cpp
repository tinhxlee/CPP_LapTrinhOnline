#include<bits/stdc++.h>
using namespace std;
int main() {
    string a;
    getline(cin,a);
    int d = 0;
    for(unsigned int i = 0 ; i < a.size() - 1 ; i ++){
        if(a[i + 1] == a[0]) d ++ ;
    }
    cout << d ;
}