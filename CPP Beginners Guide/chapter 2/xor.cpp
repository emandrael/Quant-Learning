#include <iostream>

using namespace std;

int main()
{
    bool p = true;
    bool q = true;

    if ((p || q) && !(p && q))
    {
        cout << "true";
    }
    else
    {
        cout << "false";
    }

    return 0;
}
