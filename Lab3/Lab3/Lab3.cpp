#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    float x, suma, res;
    int k, fact, n;
    cin >> x;
    n = 0;
    suma = 1;
    k = 1;
    fact = 1;
    do{
        fact *= k;
        suma += pow(x, 2 * k) / (pow(2, k) * fact);
        res = fabs((pow(x, 2 * k) / (pow(2, k) * fact)) - (pow(x, 2 * (k-1)) / (pow(2, (k-1)) * fact/k)));
        k++;
        n++;
    } while (res > pow(10,-5));
    cout << "suma = " << suma << "  amount = " << n;
}

