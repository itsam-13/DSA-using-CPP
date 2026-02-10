#include<iostream>
using namespace std;
int main()
{
    int n , count = 0;
    cout << "Enter a number : ";
    cin >> n;
    bool flag = true; 

    for(int i = 2 ; i<n ; i++){
        if(n%i == 0)
        {
            flag = false;
            break;
            
        }
    }

    if(n == 1)
        cout << "Neither Prime nor Composite" << endl;
    else if(flag == 1)
        cout << "Prime Number" << endl;
    else
        cout << "Composite Number" << endl;
    
}