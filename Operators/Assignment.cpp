#include<iostream>
using namespace std;
int main()
{
    int a, b;
    cout << " Enter two integers: ";
    cin >> a >> b; // Input two integers from user

    // Assignment operations
    cout << " Initial values: a = " << a << ", b = " << b << endl;
    a = b; // Simple assignment
    cout << " After a = b: a = " << a << ", b = " << b << endl;
    a += b; // Addition assignment
    cout << " After a += b: a = " << a << ", b = "<< b << endl;
    a -= b; // Subtraction assignment
    cout << " After a -= b: a = " << a << ", b = " << b << endl;
    a *= b; // Multiplication assignment    
    cout << " After a *= b: a = " << a << ", b = " << b << endl;
    a %= b; // Modulus assignment
    cout << " After a %= b: a = " << a << ", b = " << b << endl;
    a /= b; // Division assignment
    cout << " After a /= b: a = " << a << ", b = " << b << endl;
    return 0;
}