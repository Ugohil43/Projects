#include <iostream>
#include <math.h>

using namespace std;

int factorial(int n)
{
    int pr = 1;
    for (int i = 1; i <= n; i++)
    {
        pr*=i;
    }
    return pr;
}

void print_out(int n)
{      
    for (int i = 1; i <= n; i++)
    {
        cout << i << endl;
    }
    
}

int is_prime(int n)
{
    double sqrt_of_n = sqrt(static_cast<double>(n));
    for (int i = 2; i <= sqrt_of_n; i++)
    {
        if (n % i == 0)
        return false;
    }
    return true;
}

int main()      
{   
    /*
    int n;
    cout << "Vvedite number: ";
    cin >> n;
    cout << "Factorial: " << factorial(n) << endl;
    cout << endl;
    print_out(n);
    cout << endl;
    */
   /*
    int n;
    while (1)
    {
        int i;
        cout << "Enter a number (0 to exit) and press ENTER: ";
        cin >> i;
        if (i == 0)
        break;
        if (is_prime(i))
            cout << i << " is prime" << endl;
        else
            cout << i << " is not prime" << endl;
    }
    */
   /*
   for (int i = 2; i <= 20; i++)
   {
        if (is_prime(i))
            cout << i << " is prime" << endl;
        else
            cout << i << " is not prime" << endl;
   }
   */
    int m = 1000000000, n;
    while (1)
    {
        if (is_prime(m))
        {
            n = m;
            break;
        }
    m++;
    }
    cout << "Number is prime and > 1 billion: " << n << endl;
    return 0;
}
