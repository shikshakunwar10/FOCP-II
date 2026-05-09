/*A security system generates list of prime keys within given range. Implement a solution to display all
prime numbers between two limits.
A web-based application enforces strong password policies during user registration to improve account security.
The system requires that every password must satisfy the following conditions:
• Contain at least one uppercase letter (A–Z)
• Contain at least one lowercase letter (a–z)
• Contain at least one digit (0–9)
• Contain at least one special character from the set
@ # $ % ! & *
You are required to develop the code so that the password validation logic can be implemented in the application.*/

#include<iostream>
#include<string>
using namespace std;

int main()
{
    string password;

    bool upper=false, lower=false, digit=false, special=false;

    cout<<"Enter password: ";
    cin>>password;

    for(int i=0;i<password.length();i++)
    {
        if(password[i]>='A' && password[i]<='Z')
            upper=true;

        else if(password[i]>='a' && password[i]<='z')
            lower=true;

        else if(password[i]>='0' && password[i]<='9')
            digit=true;

        else if(password[i]=='@'||password[i]=='#'||password[i]=='$'||password[i]=='%'||password[i]=='!'||password[i]=='&'||password[i]=='*')
            special=true;
    }

    if(upper && lower && digit && special)
        cout<<"Password is Strong";
    else
        cout<<"Password is Weak";

    return 0;
}
