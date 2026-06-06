#include <iostream>
#include <cmath>
using namespace std;
//program to Convert binary to decimal
int main() {
    long long binary;
    cout << "Enter a binary number: ";
    cin >> binary;

    int decimal = 0, i = 0;
    
    while (binary != 0) {
        int digit = binary % 10;
        decimal += digit * pow(2, i);
        binary /= 10;
        i++;
    }

    cout << "Decimal number: " << decimal << endl;

    return 0;
}