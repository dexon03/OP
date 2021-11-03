#include <iostream>

using namespace std;

int main()
{
    int a, b, fib1, fib2, fib_digit;
    cin >> a >> b;
    for (int i = a; i <= b; i++) {
        fib1 = 0;
        fib2 = 1;
        fib_digit = fib2;
        cout << endl << i << ":";
        while (fib_digit <= i) {
            if (i % fib_digit == 0) {
                cout << " "<< fib_digit;
            }    
            fib1 = fib2;
            fib2 = fib_digit;
            fib_digit = fib1 + fib2;
        }
    }
    
}
