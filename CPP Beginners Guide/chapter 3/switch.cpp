#include <iostream>
using namespace std;
int main()
{
    for (int i = 0; i < 4; i++)
    {
        switch (i)
        {
        case 0:
            cout << "lesis than 1 \n";
        case 1:
            cout << "less than 2 \n";
        case 2:
            cout << "less than 3 \n";

        case 3:
            cout << "less than 4 \n";
        }
        cout << "\n";
        return 0;
    }
}
