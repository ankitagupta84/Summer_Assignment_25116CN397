#include <iostream>
using namespace std;
//program to Find x^n without pow()
int main() {
    int x, n;
    cout << "Enter base and exponent: ";
    cin >> x >> n;

    long long result = 1;

    for (int i = 0; i < n; i++) {
        result *= x;
    }

    cout << x << "^" << n << " = " << result << endl;

    return 0;
}