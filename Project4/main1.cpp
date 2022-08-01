#include <iostream>
#include <math.h>

using namespace std;

int gcf(int a, int b)
{
    int n = a % b;
    cout << "GCF(" << a << "," << b << ") => " << endl;
    if (n == 0)
    {
        cout << "GCF = " << b << endl;
        return b;
    } 
    else
        return gcf(b, n);
}

int main()      
{ 
    int a = 0, b = 0;
    while (1)
    {
        int i;
        cout << "Enter a number (0 to quit): ";
        cin >> a;
        if (a == 0)
        break;
        cout << "Enter 2nd number: ";
        cin >> b;
        gcf(a,b);
    }
    return 0;
}

