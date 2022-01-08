#include<iostream>
using namespace std;
#define MAX  20
#define TRUE  1
#define FALSE 0

int dem = 0;//biến đếm số hoán vị.
int Stop;//biến dừng tìm kiếm hoán vị tiếp theo.
int n;//so phan tu cua mang
void Init(int x[]){
    cin>>n;
    //nhập các phần tử của mảng.
    for (int i = 1; i <= n; i++) x[i] = i;
}
void Result(int x[]){
    dem++;
//  cout<<"Hoan vi "<<countHV<<": ";
    for (int i = 1; i <= n; i++) cout<<x[i];
    cout << endl;
}
void Next_Permutaion(int x[]){
    int j, k, r, s, temp;
    j = n - 1;
    while (j > 0 && x[j] > x[j + 1]) j--; //1. tìm từ trái qua phải chỉ số j thỏa mãn aj< aj 
    if (j == 0) Stop = TRUE;
    else {
        k = n;
        while (x[j] > x[k]) k--;//2.Tìm ak là số nhỏ nhất còn lớn hơn aj trong các số ở bên phải aj; 
    //3. Đổi chỗ aj với ak 
        temp = x[j]; 
        x[j] = x[k];
        x[k] = temp;
        r = j + 1; s = n;
        while (r < s){//4. Lật ngược đoạn từ aj+1 đến an. 
            temp = x[r]; 
            x[r] = x[s];
            x[s] = temp;
            r++;
            s--;
        }
    }
}
void Permutation(int x[]){
    Stop = FALSE;
    while (!Stop){
        Result(x);
        Next_Permutaion(x);
    }
}
int main(void){
    int x[MAX];
    Init(x);
    Permutation(x);
}