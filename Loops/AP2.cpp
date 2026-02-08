#include<iostream>
using namespace std;
int main()
{
    int n;
    cout<<"Enter the number of times you want to print Series: ";
    cin>>n;
    int a = 1;
    for(int i=1; i<=n; i++)
    {
        cout<<a<<" ";
        a += 2;
    }
}