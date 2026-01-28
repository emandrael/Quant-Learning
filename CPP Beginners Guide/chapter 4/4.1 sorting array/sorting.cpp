#include <iostream>
using namespace std;
int main()
{
    int size{9};
    int nums[9]{9, 8, 76, 5, 4, 3, 2, 1, 0};

    for (auto &&i : nums)
        cout << i;
    cout << endl;

    int a, b, t;


    for (a = 1; a < size; a++)
    {
        for (b = size - 1; b >= a; b--)
        {
            if (nums[b - 1] > nums[b])
            {
                t = nums[b - 1];
                nums[b - 1] = nums[b];
                nums[b] = t;
            }
        }
    }

    for (auto &&i : nums)
        cout << i;
    cout << endl;

    return 0;
}
