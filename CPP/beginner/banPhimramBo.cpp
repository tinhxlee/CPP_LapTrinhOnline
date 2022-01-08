#include<bits/stdc++.h>
using namespace std;
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    string a;
    getline(cin,a);
    for(int i = 0 ; i < a.size(); i ++){
        if(a[i] == 'B'){
            a.erase(i);
            i --;
            a.erase(i);
        }
    }
    cout << a;
}