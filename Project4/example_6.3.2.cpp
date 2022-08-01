#include <iostream>

using namespace std;

int a[10] = {1,2,3,4,5,6,7,8,9,10};
int b[10] = {0,0,0,0,0,0,0,0,0,0};

void copy_array(int *p1, int *p2, int n)
{
    while (n-- > 0)
    {
        *p1 = *p2;
        p1++;
        p2++;
    }
}

int main(int argc, char const *argv[])
{
    cout << "Array a before copy: ";
    for (int i = 0; i < 10; i++)
    {
         cout << a[i] << " ";
    }
    cout << endl;
    cout << "Array b before copy: ";
    for (int i = 0; i < 10; i++)
    {
        cout << b[i] << " ";
    }
    cout << endl;cout << endl;
    copy_array(b,a,10);
    cout << "Array a after copy: ";
    for (int i = 0; i < 10; i++)
    {
        cout << a[i] << " ";
    }
    cout << endl;
    cout << "Array b after copy: ";
    for (int i = 0; i < 10; i++)
    {
        cout << b[i] << " ";
    }
    cout << endl;
    return 0;
}
