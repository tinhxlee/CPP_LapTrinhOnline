#include<bits/stdc++.h>
using namespace std;
int main() {
    int a, b, c ;
    cin >> a >> b >> c ;
    if(a == c  or a == b or b == c) { cout << "TAM GIAC CAN"; return 0;}
    if((a * a + b * b == c * c) or (a * a + c * c == b * b) or (b * b + c * c == a * a)){ cout << "TAM GIAC VUONG"; return 0 ;}
    if((a >= (b + c)) or (b >= (a + c)) or (c >= (a + b))) { cout << "KHONG PHAI TAM GIAC";return 0 ;}
    if(a != b and b != c and a != c) {cout << "TAM GIAC THUONG";return 0 ;}
}