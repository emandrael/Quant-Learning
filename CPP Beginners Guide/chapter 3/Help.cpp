#include <iostream>
using namespace std;
int main()
{
    char choice;

    cout << "Help on:\n";
    cout << "   1. if\n";
    cout << "   2. switch\n";
    cin >> choice;

    switch (choice)
    {
    case '1':
        cout << "Some information on IF";
        break;
    case '2':
        cout << "Some information on SWITCH";
        break;
    default:
        cout << "idk what u just asked negl";
        break;
    }
}
