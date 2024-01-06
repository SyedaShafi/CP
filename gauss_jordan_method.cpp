// gauss jordan
#include <iostream>
#include <iomanip>
#include <math.h>
#include <stdlib.h>
using namespace std;
int main()
{
    float a[10][10], x[10], temp;
    int i, j, k, n;
    cout << setprecision(0) << fixed;
    cout << "Enter number of equations: ";
    cin >> n;
    cout << "Enter Coefficients of the equations: " << endl;
    for (i = 1; i <= n; i++)
    {
        for (j = 1; j <= n + 1; j++)
        {
            cout << "a[" << i << "][" << j << "]= ";
            cin >> a[i][j];
        }
    }

    // for (int i = 1; i <= n; i++)
    // {
    //     for (int j = 1; j <= n + 1; j++)
    //     {
    //         cout << a[i][j] << " ";
    //     }
    //     cout << "\n";
    // }

    int step = 1;
    for (i = 1; i <= n; i++)
    {
        if (a[i][i] == 0.0)
        {
            cout << "Mathematical Error!";
            exit(0);
        }
        for (j = 1; j <= n; j++)
        {
            if (i != j)
            {
                temp = a[j][i] / a[i][i];
                for (k = 1; k <= n + 1; k++)
                {
                    a[j][k] = a[j][k] - (temp * a[i][k]);
                }
            }
        }
        cout << "Step " << step << " :\n";
        step++;
        for (int k = 1; k <= n; k++)
        {
            cout << "\t";
            for (int m = 1; m <= n + 1; m++)
            {
                cout << (int)a[k][m] << " ";
            }
            cout << "\n";
        }
    }

    for (i = 1; i <= n; i++)
    {
        x[i] = a[i][n + 1] / a[i][i];
    }

    cout << endl
         << "Solution of Given System: " << endl;
    for (i = 1; i <= n; i++)
    {
        cout << "x" << i << " = " << x[i] << endl;
    }

    return (0);
}
