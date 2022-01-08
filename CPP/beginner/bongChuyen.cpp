#include<bits/stdc++.h>
using namespace std;
class vdv{
    public:
        string ten;
        int pb, cb, tc,pbs,cbs,tcs ;
        friend istream &operator>>(istream &is, vdv &v){
            fflush(stdin);
            getline(is,v.ten) ; 
            is >> v.pb >> v.cb >> v.tc ;
            is >> v.pbs >> v.cbs >> v.tcs ;
            return is ;
        }
};
class Nvdv{
    private:
        int n ;
        vdv *v;
    public:
        friend istream &operator>>(istream &is, Nvdv &V){
            cin >> V.n;
            V.v = new vdv[V.n + 5];
            is >> V.n ;
            for(int i = 0 ; i < V.n ; i ++){
                // fflush(stdin);
                is >> V.v[i];
            }
            return is ;
        }
        void thanhCong(){
            int a,b,c, as, bs, cs ;
            for(int i = 0 ; i < n ; i ++){
                a += v[i].pb ;
                b += v[i].cb ;
                c += v[i].tc ;
                as += v[i].pbs ;
                bs += v[i].cbs ;
                cs += v[i].tcs ;
            }
            cout << setprecision(2) << fixed ;
            cout << "Service: " << as/a * 100  << "\n";
            cout << "Block: " << bs/b * 100  << "\n";
            cout << "Spike: " << cs/c * 100  << "\n";

        }

};
int main() {
    Nvdv a ;
    cin >> a ;
    a.thanhCong();
}