// falsi method
#include <iostream>
#include <iomanip>
#include <math.h>
using namespace std;

double f(double x)
{
    double a = pow(x, 3) - 4.0;
    return a;
}

int main()
{
    cout.precision(6);
    cout.setf(ios::fixed);
    double a, b, c, e, fa, fb, fc, x[7];


a:
    cout << "Enter the value of x0: ";
    cin >> a;
    cout << "Enter the value of x1: ";
    cin >> b;

    fa = f(a);
    fb = f(b);

    if (fa * fb > 0.0)
    {
        cout << "Incorrect Initial Guesses." << endl;
        goto a;
    }
    else
    {
        cout << "_________________________________________________________________________________\n";
        cout << "itr      "
             << "x0            "
             << "x1           "
             << "x2           "
             << "f0           "
             << "f1           "
             << "f2           "
             << endl;
        cout << "_________________________________________________________________________________\n";
        for (int i = 0; i < 4; i++)
        {
            c = ((a * fb) - (b * fa)) / (fb - fa);
            x[i] = c;
            fc = f(c);
            fa = f(a);
            fb = f(b);
            cout << i + 1 << "     "
                 << a << "     "
                 << b << "     "
                 << c << "     "
                 << fa << "     "
                 << fb << "     "
                 << fc << "     "
                 << endl;
            if (fc == 0)
            {
                cout << "Approximate root :" << c;
                break;
            }

            if (fa * fc > 0)
            {
                a = c;
            }
            else if (fa * fc <= 0)
            {
                b = c;
            }
        }
    }

    cout << endl
         << "Approximate root " << c << "\n\n";

  

    for (int j = 0; j < 4 - 1; j++)
    {
        cout << "x" << j << " = " << x[j] << ", error = " << fabs(x[j] - x[j + 1]) << ", percent error = " << (fabs(x[j] - x[j + 1]) / x[j]) * 100 << "%\n";
    }

    return 0;
}