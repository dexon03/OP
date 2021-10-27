#include <iostream>
#include <cmath>

using namespace std;

int main()
{
	float x, suma, dodanok; 
	int fact, n;  // n граничне значення лічильника циклу.
	cin >> x >> n;
	suma = 1;
	fact = 1;
	for (int i = 1; i <= n; i++) {
		fact *= (2 * i);
		dodanok = pow(-1, i) * (pow(x, 2 * i) / fact);
		suma = suma + dodanok;
	}

	cout << suma;

}

