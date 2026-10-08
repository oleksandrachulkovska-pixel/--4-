#include <iostream>
#include <cmath>

using namespace std;

int main()
{
    const double eps = 0.005;
    double x0 = 4.6;
    double x;
    int n = 0;

    do
    {
        x = x0 + 1.0 / tan(x0) - 0.1;

        cout << "n = " << n
            << "; x" << n << " = " << x0
            << "; x" << n + 1 << " = " << x << endl;

        n++;

        if (fabs(x - x0) <= eps)
            break;

        x0 = x;

    } while (true);

    cout << "Root = " << x << endl;

    return 0;
}