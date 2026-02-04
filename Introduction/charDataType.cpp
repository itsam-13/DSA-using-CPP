#include<iostream>
using namespace std;
int main()
{
    char ch;
    cout << " Enter a character: ";
    cin >> ch; // Input a character from user
    cout << " You entered: " << ch << endl;
    cout << " ASCII value of " << ch << " is " << int(ch) << endl; // Display ASCII value
    return 0;
}