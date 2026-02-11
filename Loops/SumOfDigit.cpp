#include<iostream>
using namespace std;
int main()
{
    int num;
    cout <<"Enter the number: " ;
    cin >>num ;
    int a,sum = 0;
    while(num>0){

        a = num%10;
        sum+=a;
        num = num/10;
    }

    cout <<"Sum of digit is : " <<sum;

}