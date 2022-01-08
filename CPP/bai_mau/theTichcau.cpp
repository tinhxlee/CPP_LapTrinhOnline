#include<iostream>
#include<iomanip>
int main(){
    double r ;
    std :: cin >> r ;
    std :: cout << std :: setprecision(3) << std :: fixed << "VOLUME = " << 4/3.0 * 3.14159 * r * r * r ;
}