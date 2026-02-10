#include<iostream>
using namespace std;
int main()
{
    for(int i = 1 ; i <= 10 ; i++)
    {
        if(i == 5)
        {
            break; // it will break the loop when i is equal to 5
        }
        cout << i << " ";
    }
}