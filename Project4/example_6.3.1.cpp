#include <iostream>

using namespace std;

int a[10] = {1,2,3,4,5,6,7,8,9,10};
void zero_out_array(int *p, int n)
{
    while (n-- > 0)
    {
        *p = 0;
        p++;
    }
}

int main()
{
    zero_out_array(a,10);
    /*
    for (int i = 0; i < 10; i++)
    {
        cout << a[i] << " ";
    }
    */
    int *p = a;
    while (p < a +10)
    {
        cout << *p << " ";
        p++;
    }
    
    cout << endl;
    return 0;
}
