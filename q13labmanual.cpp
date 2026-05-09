/*A mathematics tool computes the exact roots of a quadratic equation for teaching purposes. Implement a
solution to calculate the roots of a quadratic equation.*/

#include <iostream>
using namespace std;

int main() {
    float a, b, c;
    float d, r1, r2, s = 0;

    cin >> a >> b >> c;

    d = b*b - 4*a*c;

    if (d >= 0) {

        for (float i = 0; i*i <= d; i += 0.0001) {
            s = i;
        }

        if (d > 0) {
            r1 = (-b + s) / (2*a);
            r2 = (-b - s) / (2*a);
            cout << "Roots are: " << r1 << " and " << r2;
        }
        else {
            r1 = -b / (2*a);
            cout << "Root is: " << r1;
        }

    }
    else {
        cout << "No real roots";
    }

    return 0;
}
