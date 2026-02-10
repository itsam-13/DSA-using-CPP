#include<iostream>
using namespace std;
int main()
{
    for(int i = 1 ; i<=10 ; i++)
    {
        if(i == 5)
        {
            continue; // it will skip the current iteration when i is equal to 5
        }
        cout << i << " ";
    }
}