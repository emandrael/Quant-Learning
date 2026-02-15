// Write a program that counts the uppercase
// letters in a string. Have it display the result.

#include <iostream>
#include <cstring>
using namespace std;
int main()
{
    char input[80];
    cin >> input;
    int res = 0;
    for (int i = 0; i < strlen(input); i++)
    {
        if (isupper(input[i]))
            res++;    
    }
    cout << "This has " << res << " uppercase letters!";
    return 0;
}