#include<iostream>
using namespace std;
int main()
{
    int x ;
    cout<<"Enter a number : ";
    cin>>x;
    // Ternary operator
    string result = (x%2==0) ? "Even" : "Odd";
    cout<<"The number is : "<<result<<endl;
}