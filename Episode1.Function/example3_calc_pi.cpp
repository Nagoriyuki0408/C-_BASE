#include <bits/stdc++.h>
using namespace std;

double arctanx(double x) {
    double sqr = x * x;
    double e = x;
    double r = 0;
    int i = 1;
    while (fabs(e / i) > 1e-15) {
        double f = e / i;
        r = (i % 4 == 1) ? r + f : r - f;
        e *= sqr;
        i += 2;
    }
    return r;
}

int main() {
    double a = 16.0 * arctanx(1 / 5.0);
    double b = 4.0 * arctanx(1 / 239.0);
    cout << "PI = " << a - b << endl;
    return 0;
}
