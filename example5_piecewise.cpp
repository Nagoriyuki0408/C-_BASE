#include <bits/stdc++.h>
using namespace std;

double mysin(double x) {
    double g = 0, t = x;
    int n = 1;
    do {
        g += t;
        n++;
        t = -t * x * x / (2 * n - 1) / (2 * n - 2);
    } while (fabs(t) >= 1e-10);
    return g;
}

int main() {
    double k, r, s;
    cout << "r = ";
    cin >> r;
    cout << "s = ";
    cin >> s;
    if (r * r <= s * s)
        k = sqrt(mysin(r) * mysin(r) + mysin(s) * mysin(s));
    else
        k = mysin(r * s) / 2;
    cout << k << endl;
    return 0;
}
