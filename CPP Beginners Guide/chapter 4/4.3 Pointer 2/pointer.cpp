#include <iostream>
using namespace std;
int main()
{
    int *i, j[10];

    double *f, g[10];

    int x;

    i = j;
    f = g;

    int gell0 = 12313;



    for (x = 0; x < 10; x++)
    {
        cout << i + x << " " << f + x << '\n';
        cout << i + x << " " << f + x << '\n';
    }

    return 0;
}
