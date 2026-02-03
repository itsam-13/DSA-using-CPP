#include<iostream>
using namespace std;
int main()
{
    int simple_interest, principal, rate, time;
    cout << "Enter Principal amount: ";
    cin >> principal;
    cout << "Enter Rate of interest: ";
    cin >> rate;
    cout << "Enter Time (in years): ";
    cin >> time;
    simple_interest = (principal * rate * time) / 100;
    cout << "Simple Interest is: " << simple_interest << endl;  
    return 0;
    
}