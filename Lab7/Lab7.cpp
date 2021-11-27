#include <iostream>

using namespace std;

int main()
{
    int k, t, count = 0, sum = 0;
    const int n = 10;
    cin >> k >> t;
    int m[n];

    for (int i = 0; i < n; i++) {
        m[i] = rand() % 30 + 1;
    }

    for (int i = 0; i < n; i++) {
        if (m[i] >= k && m[i] <= t) {
            count++;
            sum += m[i];
        }
    }

    if (count != 0) {
        cout << "count = " << count << endl << " sum = " << sum;
        for (int i = 0; i < n; i++) {
            if (m[i] >= k && m[i] <= t) {
                m[i] += sum;
            }
        }
    }
    else cout << "Elements not found"; 
}

