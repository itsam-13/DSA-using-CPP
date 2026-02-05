#include<iostream>
using namespace std;
int main()
{
    char ch;
    cout<<"Enter a character: ";
    cin>>ch;
    int ascii = (int)ch;

    if((ch>=65 && ch<=90) || (ch>=97 && ch<=122))
    {
        cout<<"The character is an alphabet."<<endl;
    }
    else
    {
        cout<<"The character is not an alphabet."<<endl;
    }
}