#include <iostream>
#include <cctype>
using namespace std;

int main()
{
    char *p;
    char str[80] = "This IS A TYPEOC Test";

    cout << "Original String: " << str << "\n";

    p = str;

    while (*p)
    {
        if (isupper(*p))
            *p = tolower(*p);
        else
            *p = toupper(*p);
        p++;
    }

    cout << "Inverted-case string: " << str;

    char *pstr;

    pstr = "PIOINTER BLACH LACH CHARLIE KIRK";

    cout << pstr;

    return 0;
}
