/* A learning application analyzes numbers for mathematical properties.
Design a solution to check whether a given number is a Perfect number or an Armstrong number. */

#include <iostream>
using namespace std;

// perfect no.

// int main()
// {
//     int num;
//     int sum;

//     cout << "Enter no. ";
//     cin >> num;

//     for (int i = 0; i < num; i++)
//     {
//         if (num % i == 0)
//         {
//             sum = i + sum;
//         }
//     }

//     if(sum == num)
//         cout << "Perfect Number";
//     else
//         cout << "Not a Perfect Number";

//     return 0;
// }


int main (){
    int num ;

    #include <iostream>
using namespace std;

int main() {
    int num, original, remainder;
    int sum = 0;

    cout << "Enter a number: ";
    cin >> num;

    original = num;

    while(num != 0) {
        remainder = num % 10;
        sum = sum + (remainder * remainder * remainder);
        num = num / 10;
    }

    if(sum == original)
        cout << "Armstrong Number";
    else
        cout << "Not an Armstrong Number";

    return 0;
}
}



    
