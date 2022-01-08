#include<bits/stdc++.h>
using namespace std;
int main(){
    int a[100];
    int n;
    cin >> n;
    vector<int> V;
    for(int i = 0 ; i < n ; i ++){
        cin >> a[i];
    }
    for(int i = 0 ; i < n - 1; i ++){
        for(int j = i + 1; j < n; j ++){
            if(abs(a[i] - a[j]) <= 1){
                if(a[j] - a[j + 1] <= 1){
                    V.push_back(a[i]);

                }
            }
        }
    }
}