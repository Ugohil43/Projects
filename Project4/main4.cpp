#include <iostream>
#include <math.h>
#include <stdlib.h>
#include <time.h>
#define VALUES 10

using namespace std;

int hits[VALUES];

int rand_0toN1(int n)
{
    return rand() % n;
}

int counter(int n)
{
    int r;
    for (int  i = 1; i <= n; i++)
    {
        r = rand_0toN1(VALUES);
        hits[r]++;
    }
}

void print(int n)
{
    for (int  i = 0; i < VALUES; i++)
    {
        cout << i << ": " << hits[i] << " Accuracy: " << static_cast<double>(hits[i]) / (n / VALUES) << endl;
    }
}

int main()
{
    int n;
    srand(time(NULL));
    //cout << "Enter number of trials to run and press ENTER: ";
    //cin >> n;

    while (1)
    {
        cout << "Enter a number of trials (0 = exit) to run and press ENTER: ";
        cin >> n;
        if (n == 0)
        break;
        for (int i = 0; i < VALUES; i++)
        {
            hits[i] = 0;
        }
        counter(n);
        print(n);     
    } 
    return 0;
}
