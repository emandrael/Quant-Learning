#include <iostream>
using namespace std;
int main()
{
    int *p, num;

    p = &num;

    *p = 100;

    cout << num << " ";
    (*p)++;
    cout << num << " ";
    (*p)++;
    cout << num << " ";
    (*p)++;

    cout << num << " ";
    cout << *p << " ";

    cout << num << " ";
    (*p)++;
    cout << num << " ";
    (*p)++;
    cout << num << " ";
    (*p)++;

    cout << num << " ";
    cout << *p << endl
         << endl
         << endl
         << endl;

    cout << *p++;

    return 0;
}
