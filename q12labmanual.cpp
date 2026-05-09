/*A civil engineer classifies a triangle design as equilateral, isosceles, or scalene. Implement a solution to
check the triangle type based on its sides.*/

#include <iostream>
using namespace std;

int main() {
    float a, b, c;

   
    cout << "Enter three sides of triangle: ";
    cin >> a >> b >> c;

    if (a + b > c && a + c > b && b + c > a) {

       
        if (a == b && b == c) {
            cout << "Triangle is Equilateral";
        }
        else if (a == b || b == c || a == c) {
            cout << "Triangle is Isosceles";
        }
        else {
            cout << "Triangle is Scalene";
        }

    }
    else {
        cout << "Not a valid triangle";
    }

    return 0;
}
