
#include <iostream>
#include <iomanip>
#include <math.h>
using namespace std;

double f(double x)
{
    double a = pow(x, 3) - x - 3.0;
    return a;
}
double ff(double x)
{
    double a = 3 * pow(x, 2) - 1.0;
    return a;
}

int main()
{
    cout.precision(6);
    cout.setf(ios::fixed);
    double a, b, Xn, e, fa, fb, fXn, ffXn, r, x[100];
    int i = 0;

d:
    cout << "Enter the value of x0: ";
    cin >> a;
    cout << "\nEnter the value of x1: ";
    cin >> b;
    cout << "\nEnter the number of ieration: ";
    int itr;
    cin >> itr;
    fa = f(a);
    fb = f(b);

    if (fa * fb >= 0.0)
    {
        cout << "Please enter a different intial guess." << endl;
        goto d;
    }
    else
    {
        cout << "_________________________________________________________________________________\n";
        cout << "itr      "
             << "Xn            "
             << "FXn          "
             << "F'Xn           "
             << "X(n+1)           "
             << endl;
        cout << "_________________________________________________________________________________\n";
        Xn = a;
        if (itr > 0)
        {
            for (int k = 0; k < itr; k++)
            {
                r = Xn - (f(Xn) / ff(Xn));
                x[k] = r;
                if (r == x[k - 1] and k > 0)
                    break;
                cout << k + 1 << "     "
                     << Xn << "     "
                     << f(Xn) << "     "
                     << ff(Xn) << "     "
                     << r << "     "
                     << endl;
                Xn = r;
            }
        }
        // while (1)
        // {
        //     r = Xn - (f(Xn) / ff(Xn));
        //     x[i] = r;
        //     if (r == x[i - 1] and i > 0)
        //         break;
        //     cout << i << "     "
        //          << Xn << "     "
        //          << f(Xn) << "     "
        //          << ff(Xn) << "     "
        //          << r << "     "
        //          << endl;
        //     Xn = r;
        //     i++;
        // }
    }

    cout << endl
         << "Approximate root :" << r << "\n\n";

    for (int j = 0; j < itr - 1; j++)
    {
        cout << "x" << j << " = " << x[j] << ", error = " << fabs(x[j] - x[j + 1]) << ", percent error = " << (fabs(x[j] - x[j + 1]) / x[j]) * 100 << "%\n";
    }
    // for (int j = 0; j < i - 1; j++)
    // {
    //     cout << "x" << j << " = " << x[j] << ", error = " << fabs(x[j] - x[j + 1]) << ", percent error = " << (fabs(x[j] - x[j + 1]) / x[j]) * 100 << "%\n";
    // }

    return 0;
}