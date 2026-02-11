#include<iostream>
using namespace std;
int main()
{
    int n;
    cout << "Enter a number: ";
    cin >> n;
    int count = 0;
    int a = n;
    while(n > 0)
    {
        n = n / 10;
        count++;
    }
    if(a==0) // Special case for 0, which has 1 digit
    {
        count = 1;
    }
    cout << "Number of digits: " << count << endl;
    return 0;
}