#include<iostream>
using namespace std;
int main()
{
    int base, exponent;
    cout << "Enter base: ";
    cin >> base;
    cout << "Enter exponent: ";
    cin >> exponent;
    int result = 1;
    for(int i = 1; i <= exponent; i++) {
        result *= base;
    }
    cout << base << "^" << exponent << " is: " << result << endl;
    return 0;
}