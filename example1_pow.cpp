#include <bits/stdc++.h>
using namespace std;

int pow(int a, int b) {
    int res = 1;
    for (int i = 1; i <= b; i++)
        res *= a;
    return res;
}

int main() {
    int i, j, c;
    cout << "Please enter the numbers: ";
    cin >> i >> j;
    c = pow(i, j);
    cout << c << endl;
    return 0;
}
