#include <iostream>

using namespace std;

double a[10];

void swap(double *p1, double *p2)
{
    double temp = *p1;
    *p1 = *p2;
    *p2 = temp;
}


void sort(int n)
{
    int high;
    for (int i = 0; i < n - 1; i++)
    {
        high = i;
        for (int j = i + 1; j < n; j++)
            if (a[j] > a[high])
                high = j;

        if (i != high)
            swap(&a[i], &a[high]);
    } 
}

int main()
{
    for (int i = 0; i < 10; i++)
    {
        cout << "Enter array element #" << i << ": ";
        cin >> a[i];
    }
    sort(10);
    cout << "Here are all the array elements, sorted: " << endl;
    for (int i = 0; i < 10; i++)
    {
        cout << a[i] << " ";
    }
    return 0;
}
