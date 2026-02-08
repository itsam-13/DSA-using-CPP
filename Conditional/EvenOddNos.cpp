#include<iostream>
using namespace std;
int main()
{
    cout << "Enter a number: ";
    int num;
    cin >> num;
    
    if(num % 2 == 0)
        cout << num << " is an Even number." << endl;
    else
        cout << num << " is an Odd number." << endl;

}