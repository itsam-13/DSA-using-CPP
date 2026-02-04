#include<iostream>
using namespace std;
int main()
{
    float x;
    cout << " Enter a floating-point number: ";
    cin >> x; // Input a floating-point number from user
    cout << " You entered: " << x << endl;
    float y = (int)x; // Type casting to integer
    if(y<0) y = y-1;
    float z = (float)y;
    x = x - z;
    cout << " The fractional part of " << x << " is " << x << endl; // Display the fractional part
    return 0;
}