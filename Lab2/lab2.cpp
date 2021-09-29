#include <iostream>
#include <cmath> 
using namespace std;

int main()
{
    float x1, y1, x2, y2, x3, y3, vidst1,vidst2,vidst3;
    cin >> x1 >> y1 >> x2 >> y2 >> x3 >> y3;
    vidst1 = sqrt(pow(x1,2) + pow(y1,2));
    vidst2 = sqrt(pow(x2,2) + pow(y2,2));
    vidst3 = sqrt(pow(x3,2) + pow(y3,2));
    if (vidst1 < vidst2 && vidst1 < vidst3) {
        cout << "first point nearly";
    }
    else if (vidst2 < vidst3) {
        cout << "second point nearly";
    }
    else cout << "third point nearly";
}


