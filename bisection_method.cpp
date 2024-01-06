
#include <iostream>
#include <cmath>
#include <iomanip>
using namespace std;
double f(double x)
{
    double a = 2 * pow(x, 3) + 3 * x - 1.0;
    return a;
}
int main()
{
    cout.precision(6);
    cout.setf(ios::fixed);
    double a, b, c, e, fa, fb, fc;
a:
    cout << "Enter the value of x0:";
    cin >> a;
    cout << "\nEnter the value of x1:";
    cin >> b;
    int itr = 0;
    cout << "Enter the number of iteration: ";
    cin >> itr;
    e = 0.00000001;
    if (f(a) * f(b) > 0)
    {
        cout << "Please enter a different intial guess" << endl;
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

        int i = 1;
        if (itr > 0)
        {
            for (int k = 0; k < itr; k++)
            {
                c = (a + b) / 2.0;
                fa = f(a);
                fb = f(b);
                fc = f(c);
                cout << k + 1 << "     "
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

        // while (fabs(a - b) >= e)
        // {
        //     c = (a + b) / 2.0;
        //     fa = f(a);
        //     fb = f(b);
        //     fc = f(c);
        //     cout << i << "     "
        //          << a << "     "
        //          << b << "     "
        //          << c << "     "
        //          << fa << "     "
        //          << fb << "     "
        //          << fc << "     "
        //          << endl;
        //     if (fc == 0)
        //     {
        //         cout << "Approximate root :" << c;
        //         break;
        //     }

        //     if (fa * fc > 0)
        //     {
        //         a = c;
        //     }
        //     else if (fa * fc <= 0)
        //     {
        //         b = c;
        //     }
        //     i++;
        // }
    }
    cout << "Approximate root " << c;
    return 0;
}
