#include <iostream>

using namespace std;

int main()
{
    int fib1, fib2, fib_digit;
    int a, b;
    cin >> a >> b;
    for (int i = a; i <= b; i++) {
        fib1 = 1;
        fib2 = 1;
        cout << endl << i << ":";
        while (fib2 <= i) {
            if (i % fib2 == 0) {
                cout << " "<< fib2;
            }
            fib_digit = fib1 + fib2;    
            fib1 = fib2;
            fib2 = fib_digit;
        }
    }
    
}
