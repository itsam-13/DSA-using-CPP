#include<iostream>
using namespace std;
int main()
{
    int num;
    cout<<"Enter a number: ";
    cin>>num;
    if(num>=100 && num<=999)
    {
        cout<<"The number is a 3-digit number."<<endl;
    }
    else
    {
        cout<<"The number is not a 3-digit number."<<endl;
    }
}