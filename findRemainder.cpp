#include<iostream>
using namespace std;
int main()
{
    int dividend, divisor, remainder;
    cout << "Enter dividend: ";
    cin >> dividend;
    cout << "Enter divisor: ";
    cin >> divisor;
    remainder = dividend % divisor;
    cout << "Remainder is: " << remainder << endl;
}