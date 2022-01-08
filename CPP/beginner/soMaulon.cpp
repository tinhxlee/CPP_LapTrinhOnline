#include<bits/stdc++.h>
using namespace std;
int main(){
    int a,b,c;
    cin >> a >> b >> c ;
    if(a != b and a != c and b != c) cout << 3;
    if(a == b and a ==c) cout << 1;
    if((a == b and b != c) or (a == c and c!= b) or (b == c and c != a)) cout << 2;
   
}