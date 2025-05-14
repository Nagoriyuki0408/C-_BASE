#include <bits/stdc++.h>
using namespace std;

int power(int a, int b) {
    int res = 1;
    for (int i = 1; i <= b; i++)
        res *= a;
    return res;
}

int main() {
    int value = 0;
    cout << "Enter an 8-bit binary number: ";
    for (int i = 7; i >= 0; i--) {
        char ch;
        cin >> ch;
        if (ch == '1') {
            value += power(2, i);
        }
    }
    cout << "Decimal value is: " << value << endl;
    return 0;
}
