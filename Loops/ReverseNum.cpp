#include<iostream>
using namespace std;

int main() {
    int num;
    cout << "Enter the number: ";
    cin >> num;

    int reverse = 0;

    while (num > 0) {
        int digit = num % 10;
        reverse = reverse * 10 + digit;
        num = num / 10;
    }

    cout << "Reversed number is: " << reverse;

    return 0;
}
