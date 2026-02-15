// Write a program that prompts the user for two strings 
// and then compares the strings for equality, but ignores 
// case differences. Thus, “ok” and “OK” will compare as equal.
#include <iostream>
#include <cstring>

using namespace std;
int main()
{
    char str1[80];
    char str2[80];

    cin >> str1;
    cin >> str2;

    int len = strlen(str1);
    
    if (len != strlen(str2)){
        cout << "Not equal.";
    }
    
    for(int i = 0; i < len; i++){
        if(tolower(str1[i]) != tolower(str2[i])){
            cout << "This is not it chief";
            return 0;
        }
    }

    cout << "These match";

    return 0;



}