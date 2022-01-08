#include<iostream>
#include<iomanip>
int main() {
    double r;
    std :: cin >> r;
    std :: cout << std :: setprecision(4) << std :: fixed << "A=" << 3.14159 * r * r;
}