#include <iostream>
using namespace std;
int main()
{
    int nums[10] = {1, 2, 3, 4, 5, 1, 7, 8, 9, 10};
    char hello_ine = 'g';
    for (int i = 0; i < 9; i++)
    {
        for (int j = 0; j < 9; j++)
        {
            if (i == j)
                continue;
            if (nums[i] == nums[j])
            {
                cout << "Items at " << i << " and " << j;
                return 0;
            }
        }
    }
    return 0;
}