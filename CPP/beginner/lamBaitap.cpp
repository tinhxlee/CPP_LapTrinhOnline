#include<iostream>
using namespace std;
int main() {
    int startA, endA, startB, endB;
    cin >> startA >> endA >> startB >> endB;
    if(endA <= startB or endB <= startA){
        cout << 0;
        return 0;
    }
    if(startA >= startB and endA <= endB){
        cout << endA - startA;
        return 0;
    }
    if(startB >= startA and endB <= endA){
        cout << endB - startB;
        return 0;
    }
    if(endA >= startB and startA <= startB){
        cout << endA - startB;
        return 0;
    }
    if(endA >= endB and startA <= endB){
        cout << endB - startA;
        return 0;
    }
}