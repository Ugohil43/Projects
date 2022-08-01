#include <iostream>

using namespace std;

void triple_it(int *p)
{
    *p = *p * 3;
}

int main()
{
    int n = 15;
    cout << "Value of a before doubling is " << n << endl;
    triple_it(&n);
    cout << "Value of a  after tripeling is " << n << endl;    
    return 0;
}
