// secant method
#include <iostream>
#include <iomanip>
#include <math.h>
using namespace std;

double f(double x)
{
    double a = pow(x, 3) + x - 1.0;
    return a;
}

int main()
{
    cout.precision(6);
    cout.setf(ios::fixed);
    double x1, x2, xm1, xm2, e, f1, f2, k;
    int i = 0;

    cout << "Enter the value of x0: ";
    cin >> x1;
    cout << "Enter the value of x1: ";
    cin >> x2;
    // cout << "\nEnter the degree of accuracy desired" << endl;
    // cin >> e;
    e = 0.001;

    cout << "_________________________________________________________________________________\n";
    cout << "itr      "
         << "X1            "
         << "X2          "
         << "X3           "
         << "f(x1)           "
         << "f(x2)           "
         << endl;
    cout << "_________________________________________________________________________________\n";

    do
    {
        f1 = f(x1);
        f2 = f(x2);
        xm1 = ((f2 * x1) - (f1 * x2)) / (f2 - f1);
        /* checking wheather xm1 is root of the equation or not */
        k = (f(x1) * f(xm1));
        cout
            << i << "     "
            << x1 << "     "
            << x2 << "     "
            << xm1 << "     "
            << f1 << "     "
            << f2 << "     "
            << endl;
        x1 = x2;
        x2 = xm1;
        if (k == 0)
            break;
        xm2 = ((f2 * x1) - (f1 * x2)) / (f2 - f1);
        i++;
    } while (fabs(xm2 - xm1) >= e);

    cout << endl
         << "Approximate root :" << xm1 << "\n\n";
}
