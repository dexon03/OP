#include <iostream>

using namespace std;

int factorial(int n){
    if (n>0){
        return n * factorial(n-1);
    } else return 1;
}

int rearrange(int n,int k){
    return factorial(n)/factorial(n-k);
}

int main() {
    int dig3,dig2,dig4;
    dig3 = rearrange(5,3);
    dig2 = rearrange(4,2);
    dig4 = rearrange(5,4);
    if (dig3 > dig2 && dig3 > dig4){
        cout << dig3;
    }else if (dig2>dig4){
        cout << dig2;
    }else cout << dig4;
}
