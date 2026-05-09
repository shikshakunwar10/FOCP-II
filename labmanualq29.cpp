/*A weather monitoring app records 30-day temperature logs. Implement a solution to store daily
temperatures in an array and display the minimum temperature for the month.*/

#include<iostream>
using namespace std;

int main()
{
    float temp[30];
    float min;

    cout<<"Enter temperatures for 30 days:\n";

    for(int i=0;i<30;i++)
    {
        cin>>temp[i];
    }

    min = temp[0];

    for(int i=1;i<30;i++)
    {
        if(temp[i] < min)
        {
            min = temp[i];
        }
    }

    cout<<"Minimum temperature = "<<min;

    return 0;
}
