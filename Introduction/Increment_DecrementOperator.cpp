#include<iostream>
using namespace std;
int main()
{
    int x = 10; // Declaring an integer variable and initializing it with a value
    cout << "Initial value of x: " << x << endl; // Printing the initial value of x
    x++; // Incrementing x by 1 (post-increment)
    cout << "Value of x (x++): " << x++ << endl; // Printing the value of x at post-increment
    cout << "Value of x after post-increment (x++): " << x << endl; // Printing the value of x after post-increment
    
    ++x; // Incrementing x by 1 (pre-increment) 
    cout << "Value of x after pre-increment (++x): " << x << endl; // Printing the value of x after pre-increment
    
    x--; // Decrementing x by 1 (post-decrement)
    cout << "Value of x after post-decrement (x--): " << x << endl; // Printing the value of x after post-decrement
    
    --x; // Decrementing x by 1 (pre-decrement)
    cout << "Value of x after pre-decrement (--x): " << x << endl; // Printing the value of x after pre-decrement

}