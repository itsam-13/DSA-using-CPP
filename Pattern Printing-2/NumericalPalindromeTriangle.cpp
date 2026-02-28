#include<iostream>
using namespace std;
int main()
{
    int n;
    cout << "Enter the number of rows : ";
    cin >>n;
    
    for(int i = 1; i <= n; i++){
        
        for(int k = 1; k <= i; k++){
            cout << k;
            
        }
        for(int q = i-1 ; q >= 1; q--){
            cout << q ;
        }
        cout << endl;
    }
}   