#include <iostream>
#include <math.h>

using namespace std;


int main() 
{
    int n, is_prime, i;
    cout << "Enter start number number and press ENTER: ";
    cin >> n;
    
    is_prime = true;

    double s = sqrt(static_cast<double>(n));
    
   for (i = 2; i <= s; i++)
   {
        if (n % i == 0)
        {
            is_prime = false;
            break;
        }  
   }
   
    if (is_prime)
        cout << "Number is prime." << endl;
    else
        cout << "Number is not prime." << endl;
   
    return 0;    
}
