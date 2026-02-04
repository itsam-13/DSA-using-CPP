#include<iostream>
using namespace std;
int main()
{
    int a, b;
    cout << " Enter two integers: ";
    cin >> a >> b; // Input two integers from user
    // Relational operations
    cout << " a == b : " << (a == b) << endl; // Equal to
    
    cout << " a != b : " << (a != b) << endl; // Not equal to
    
    cout << " a > b  : " << (a > b) << endl;  // Greater than
    
    cout << " a < b  : " << (a < b) << endl;  // Less than
    
    cout << " a >= b : " << (a >= b) << endl; // Greater than or equal to
    
    cout << " a <= b : " << (a <= b) << endl; // Less than or equal to
    return 0;
}