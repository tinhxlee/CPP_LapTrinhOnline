#include<bits/stdc++.h>
using namespace std;

int main(){
    int ma1,ma2,sl1,sl2;
    double gia1,gia2;
    cin >> ma1 >> sl1 >> gia1 ;
    cin >> ma2 >> sl2 >> gia2 ;
    cout << setprecision(2) << fixed ;
    cout << "VALOR A PAGAR: R$ " << gia1 * sl1 + gia2 * sl2 ;
}