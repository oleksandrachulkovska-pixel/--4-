#include <iostream>
#include <cmath>

using namespace std;

int main()
{
    const double eps = 0.005;
    double x0 = 0.88;
    double x;
    int n = 0;

    do
    {
        x = x0 + 0.5 * (x0 * x0 * cos(2 * x0) + 0.2);

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
