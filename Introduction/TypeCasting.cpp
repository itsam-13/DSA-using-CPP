#include<iostream>
using namespace std;
int main()
{
    float num;
    cout << " Enter a floating-point number: ";
    cin >> num; // Input a floating-point number from user
    int intNum = (int)num; // Type casting to integer
    cout << " You entered: " << num << endl;
    cout << " After type casting to integer: " << intNum << endl; // Display the integer value
    
    int y = 10;
    float x = (float)y; // Type casting to float
    cout << " Integer value: " << y << endl;
    cout << " After type casting to float: " << x << endl; // Display the float value

    char ch = 'A';
    int asciiValue = (int)ch; // Type casting to integer to get ASCII value
    cout << " Character: " << ch << endl;
    cout << " ASCII value of " << ch << " is " << asciiValue << endl; // Display ASCII value

    
    
    return 0;
}