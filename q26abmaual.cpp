/*The school report card system stores subject marks for each student.
Implement a solution to accept marks in 5 subjects, compute the total and percentage, and display the result.*/

#include<iostream>
using namespace std;

int main()
{
    int m1, m2, m3, m4, m5;
    int total;
    float percentage;

    cout<<"Enter marks of 5 subjects:"<<endl;
    cin>>m1>>m2>>m3>>m4>>m5;

    total = m1 + m2 + m3 + m4 + m5;

    percentage = total / 5.0;

    cout<<"Total Marks = "<<total<<endl;
    cout<<"Percentage = "<<percentage<<"%"<<endl;

    return 0;
}
