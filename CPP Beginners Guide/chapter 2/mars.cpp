#include <iostream>

using namespace std;

int main()
{
    double distance_to_mars  {34000000};

    double mile_per_second {186000};

    double delay  {distance_to_mars/mile_per_second};

    double delay_in_mins {delay/60.0};

    cout << "The delay is " << delay << " seconds, or " << delay_in_mins << " mins.";


    unsigned int x = 100;

    cout << x;

    return 0;
}
