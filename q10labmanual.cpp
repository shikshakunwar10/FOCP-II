/*A calendar app calculates whether February has 29 days. Implement a solution to check if a year is a
leap year or not.*/

#include <iostream>
using namespace std;
class Year
{
    private:
    int year;
    
    public:

    void leap_year()
    {
       cout <<"Enter the year";
        cin >> year;
    
       if ( (year % 400 == 0) || year % 4 == 0 && year % 100 != 0){
        cout <<"Leap year h!!!";
       }
       else{
        cout << "Nhi h leap year..";
       }

    }
};

int main ()
{
    Year obj;
    obj.leap_year();
}
