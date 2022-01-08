#include<iostream>
using namespace std;
int main() {
    int w,h,n,S;
    cin >> w >> h >> n;
    S = w * h;
    int a[10][10];
    for(int i = 0 ; i < n ; i ++){
        for(int j = 0 ; j < 3 ; j ++){
            cin >> a[i][j];
        }
    }
    for(int i = 0 ; i < n ; i ++){
        for(int j = 0 ; j < 3 ; j ++){
            if(a[i][2] == 1) S -= (h * a[i][0]);
            if(a[i][2] == 2) S -= h * (w - a[i][0]);
            if(a[i][2] == 3) S -= w * a[i][1];
            if(a[i][2] == 4) S -= (w * (h - a[i][1]));
        }
    }
    cout << S ;
}