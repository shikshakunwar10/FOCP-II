/*A wholesale supplier applies 10% discount if the order > 1000 items. Implement a solution to compute total
expenses and apply a discount accordingly.*/
#include <iostream>
using namespace std;

int main() {
    int items;
    float price, total, discount, finalAmount;

    
    cout << "Enter number of items: ";
    cin >> items;

    cout << "Enter price per item: ";
    cin >> price;

   
    total = items * price;

   
    if (items > 1000) {
        discount = total * 0.10;   
        finalAmount = total - discount;
        cout << "Discount Applied: 10%" << endl;
    } 
    else {
        finalAmount = total;
        cout << "No Discount" << endl;
    }

   
    cout << "Total Amount = " << finalAmount << endl;

    return 0;
}
