#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;

int main() {
    double xp, xk, x, dx, eps;
    double a, R, S;
    int n, e;
    cout << "xp = "; cin >> xp;
    cout << "xk = "; cin >> xk;
    cout << "dx = "; cin >> dx;
    cout << "eps = "; cin >> eps;

    cout << fixed;
    cout << "-----------------------------------------" << endl;
    cout << "|" << setw(5) << "x" << "   |"
        << setw(10) << "f(x)" << " |"
        << setw(5) << "S" << "      |"
        << setw(5) << "n" << " |" << endl;
    cout << "-----------------------------------------" << endl;

    x = xp;
    while (x <= xk) {
        n = 0;
        a = 1.0;
        S = a;
        do {
            n++;
            R = pow(x, 2) / n;
            a *= R;
            S += a;
        } while (abs(a) >= eps);

        cout << "|" << setw(7) << setprecision(2) << x << " |"
            << setw(10) << setprecision(5) << exp(pow(x, 2)) << " |"
            << setw(10) << setprecision(5) << S << " |"
            << setw(5) << n << " |" << endl;

        x += dx;
    }
    cout << "-----------------------------------------" << endl;
    system("pause");
    return 0;
}