#include <iostream>
using namespace std;
int main(){
 float eng, math, sci, sst, comp, avg;
 cout << "\nEnter marks in english: ";
    cin >> eng;
    cout << "\nEnter marks in mathematics: ";
    cin >> math;
    cout << "\nEnter marks in science: ";
    cin >> sci;
    cout << "\nEnter marks in social studies: ";
    cin >> sst;
    cout << "\nEnter marks in computer: ";
    cin >> comp;

    avg = (eng + math + sci + sst + comp)/5;
    cout << "\nThe avearge marks of the student is: " << avg;

    return 0;

 }
