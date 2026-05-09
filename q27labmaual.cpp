#include<iostream>
using namespace std;

int main()
{
    float price[10];
    float max;

    cout<<"Enter prices of 10 items:\n";

    for(int i=0;i<10;i++)
    {
        cin>>price[i];
    }

    max = price[0];

    for(int i=1;i<10;i++)
    {
        if(price[i] > max)
        {
            max = price[i];
        }
    }

    cout<<"Maximum price = "<<max;

    return 0;
}
