#include <iostream>
using namespace std;

int main(int argc, char const *argv[])
{
    double sum = 0;
    int n;
    double *p;

    cout << "Enter number of items: ";
    cin >> n;

    p = new double[n];

    for (int i = 0; i < n; i++)
    {
        cout << "Enter item #" << i << ": ";
        cin >> p[i];
        sum += p[i];
    }
    cout << "Here are the items: ";
    for (int i = 0; i < n; i++)
        cout << p[i] << ", ";
    cout << endl;
    cout << "The total is: " << sum << endl;
    cout << "The average is: " << sum / n << endl;
    delete [] p;
    return 0;
}