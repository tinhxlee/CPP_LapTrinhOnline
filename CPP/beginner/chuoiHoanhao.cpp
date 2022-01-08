#include<bits/stdc++.h>
using namespace std;
int main()
{
    string s;
    cin>>s;
    map<char,int> M;
    for(char c:s) M[c]++;
    int ok=1;
    for(auto z:M) if(z.second%2) ok=0;
    cout<<(ok?"Yes":"No");
}