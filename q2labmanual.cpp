/* An architect wants to calculate the space covered
   by a circular fountain. Implement a solution to
   compute the area of a circle.
*/



#include<iostream>
using namespace std;
int main (){
    float num1;
    float pie = 3.14;
    float area;

    cout << "Enter radius : ";
    cin >> num1;

    area = pie* num1* num1;
    cout<< "\nThe area of circle : " << area;
    return 0;

}
