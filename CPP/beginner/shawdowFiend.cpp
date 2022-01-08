#include<bits/stdc++.h>
using namespace std;
class toaDo{
    private:
        int x,y;
    public:
        friend istream &operator>>(istream &is, toaDo &t);
        double kc(toaDo &t);
};
istream &operator>>(istream &is, toaDo &t){
    is >> t.x >> t.y;
    return is;
}
double toaDo ::kc(toaDo &t){
    return abs(this->x - t.x) + abs(this->y - t.y);
}
int main() {
    int n,m;
    cin >> n >> m;
    toaDo *human = new toaDo[n + 10];
    toaDo *ham = new toaDo[m + 10];
    for(int i = 1 ; i <= n ; i ++){
        cin >> human[i];
    }
    for(int i = 1 ; i <= m ; i ++){
        cin >> ham[i];
    }
    int min[n + 10];
    for(int i = 1; i <= n ; i ++){
        for(int j = 1, z = j + 1 ; j <= m,z <= m ; j ++){
            if(human[i].kc(ham[j]) > human[i].kc(ham[z])) min[i] = z ;
            // if(human[i].kc(ham[j]) == human[i].kc(ham[z])) z = j;
        }
    }
    for(int i = 1 ; i <= n ; i ++) cout << min[i] << "\n";

}