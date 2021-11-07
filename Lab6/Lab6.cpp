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
    int three_digit_number,two_digit_number,four_digit_number;
    three_digit_number = rearrange(5,3);
    two_digit_number = rearrange(4,2);
    four_digit_number = rearrange(5,4);
    if (three_digit_number > two_digit_number && three_digit_number > four_digit_number){
        cout << "three didit more";
    }else if (two_digit_number>four_digit_number){
        cout << "two digit more";
    }else cout << "four digit more";
}
