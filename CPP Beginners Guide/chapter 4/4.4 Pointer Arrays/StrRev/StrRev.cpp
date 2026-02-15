#include <iostream>
#include <cstring>
using namespace std;

int main()
{
    char str[80] = "HELLO MOTHER FOCKERR";

    char *start, *end;

    char t;

    int len = strlen(str);

    start = &str[0];
    end = &str[len - 1];

    while (start < end)
    {
        cout << start << " " << end << "\n";
        char t = *start;
        *start = *end;
        *end = t;
        start++;
        end--;
    }

    cout << start << " " << end << "\n";

    cout << str << "\n";

    return 0;
}