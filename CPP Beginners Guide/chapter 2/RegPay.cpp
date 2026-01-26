#include <iostream>
#include <cmath>

using namespace std;
int main()
{

    double int_rate, principal, pay_per_year, num_years;

    cout << "Give interest rate " << endl;
    cin >> int_rate;
    cout << "Give the principal" << endl;
    cin >> principal;
    cout << "give the pay per year" << endl;
    cin >> pay_per_year;
    cout << "How many years?" << endl;
    cin >> num_years;

    double numerator = int_rate * (principal / pay_per_year);
    double denominator = 1 - pow(((int_rate / pay_per_year) + 1), -(pay_per_year * num_years));

    double payment = numerator / denominator;

    cout << "The payment is " << payment;

    return 0;
}
