#include<iostream>
using namespace std;
int main() {
    char c[20];
    for(int i = 0; i < 19 ; i ++){
        cin >> c[i];
    }
    for(int i = 0; i < 19 ; i ++){
        if(c[5] == ',' and c[13] == ','){
            c[5] = ' ';
            c[13] = ' ';
        }
    }
    for(int i = 0 ; i < 19 ; i ++){
        cout << c[i];
    }
}