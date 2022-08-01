#include <iostream>
#include <math.h>

using namespace std;

void get_divisors(int n)
{
    double sqrt_of_n = sqrt((double) n);
    for (int i = 2; i <= sqrt_of_n; i++)
    {
        if (n % i == 0)
        {
            cout << i << ", ";
            get_divisors(n/i);
            return;
        }
    }
    cout << n << endl;
}

using namespace std;

int factorial(int n)
{
    if (n > 1)
    return n * factorial(n - 1);
    else
    return 1;
}

int main(int argc, char const *argv[])
{
    /*
    int i,n;
    while (1)
    {
        cout << "Enter a number (0 = exit) and press ENTER: ";
        cin >> n;
        if (n == 0)
        break;
        get_divisors(n);
    }
    */
    int n;
    while (1)
    {
        cout << "Enter a number (0 = exit) and press ENTER: ";
        cin >> n;
        if (n == 0)
        break;
        cout << "Factorial: " << factorial(n) << endl;
    }
    return 0;
}
