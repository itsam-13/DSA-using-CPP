#include<iostream>
using namespace std;
int main()
{
    //100 97 94 .... 34 terms
    int a = 100;
    for (; a>0 ;){
        cout << a <<endl;
        a = a-3;
    }
}