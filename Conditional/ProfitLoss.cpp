#include<iostream>
using namespace std;
int main()
{
    int costPrice, sellingPrice;
    cout << "Enter the cost price: ";
    cin >> costPrice;
    cout << "Enter the selling price: ";
    cin >> sellingPrice;
    if(sellingPrice > costPrice)
    {
        cout << "Profit: " << sellingPrice - costPrice << endl;
    }
    else if(costPrice > sellingPrice)
    {
        cout << "Loss: " << costPrice - sellingPrice << endl;
    }
    else
    {
        cout << "No profit, no loss." << endl;
    }
}