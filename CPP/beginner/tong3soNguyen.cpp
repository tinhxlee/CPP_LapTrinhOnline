#include<iostream>
using namespace std;
#define ll long long
int main()
{
	ll n,s;
	cin >> n >> s;
    ll A[7500];
	if(3*n < s) cout << 0;
	else if(n >= s) cout<<(s + 1)*(s + 2)/2;
	else
	{
		ll kq = 0;
		for(int i = 0; i <= s; i ++)
        {
            if(i <= n) A[i] = i + 1;
            else {
                if(i <= 2 *n) A[i] =  2 * n - i + 1;
                else A[i] = 0;
            }
        }
		for(int i = 0; i <= n; i ++) kq += A[s - i];
		cout<<kq;
	}
}