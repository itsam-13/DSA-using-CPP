#include<iostream>
using namespace std;
int main()
{
    cout << "Enter a number: ";
    int number;
    cin >> number;
    if(number < 0)
    {
        number = -number;
    }
    cout << "The absolute value is: " << number << endl;
}