/*A content-management system receives user-entered text that may contain inconsistent spacing, mixed
letter cases, and invalid characters.
For reliable storage and processing, the system must normalize and validate the input string.
Develop a C++ program that performs the following tasks on a given input string:
1. Remove leading, trailing, and extra spaces between words
2. Convert the string to sentence case (first character uppercase, remaining lowercase)
3. Count and display:
o Total number of words
o Total number of digits
o Total number of special characters
4. Validate that the final string contains only alphabets, digits, and spaces
Display appropriate messages based on the validation result.*/

#include<iostream>
#include<string>
using namespace std;

int main()
{
    string str, cleaned="";
    int digits=0, special=0, words=0;

    cout<<"Enter a string: ";
    getline(cin,str);

    // Remove leading spaces
    int i=0;
    while(i<str.length() && str[i]==' ')
        i++;

    // Remove extra spaces
    for(; i<str.length(); i++)
    {
        if(!(str[i]==' ' && str[i+1]==' '))
            cleaned += str[i];
    }

    // Remove trailing space
    if(cleaned[cleaned.length()-1]==' ')
        cleaned.erase(cleaned.length()-1);

    // Sentence case
    if(cleaned[0]>='a' && cleaned[0]<='z')
        cleaned[0] = cleaned[0]-32;

    for(int i=1;i<cleaned.length();i++)
    {
        if(cleaned[i]>='A' && cleaned[i]<='Z')
            cleaned[i] = cleaned[i]+32;
    }

    // Counting
    for(int i=0;i<cleaned.length();i++)
    {
        if(cleaned[i]>='0' && cleaned[i]<='9')
            digits++;

        else if(!((cleaned[i]>='A' && cleaned[i]<='Z') ||
                  (cleaned[i]>='a' && cleaned[i]<='z') ||
                  cleaned[i]==' '))
            special++;

        if((i==0 && cleaned[i]!=' ') || 
           (cleaned[i]==' ' && cleaned[i+1]!=' '))
            words++;
    }

    // Validation
    bool valid=true;
    for(int i=0;i<cleaned.length();i++)
    {
        if(!((cleaned[i]>='A' && cleaned[i]<='Z') ||
             (cleaned[i]>='a' && cleaned[i]<='z') ||
             (cleaned[i]>='0' && cleaned[i]<='9') ||
             cleaned[i]==' '))
        {
            valid=false;
            break;
        }
    }

    cout<<"\nNormalized String: "<<cleaned<<endl;
    cout<<"Total Words: "<<words<<endl;
    cout<<"Total Digits: "<<digits<<endl;
    cout<<"Total Special Characters: "<<special<<endl;

    if(valid)
        cout<<"String is VALID";
    else
        cout<<"String is INVALID";

    return 0;
}
