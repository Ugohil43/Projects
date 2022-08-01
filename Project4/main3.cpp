#include <iostream>
#include <math.h>
#include <stdlib.h>
#include <time.h>

using namespace std;

int rand_0toN1(int n)
{
    return (rand() % n) + 1;
}

int main(int argc, char const *argv[])
{
    int n, r;
    srand(time(NULL));
    cout << "Enter a number of dice to roll: ";
    cin >> n;
    for (int i = 1; i <= n; i++)
    {
        r = rand_0toN1(6) + 1;
        cout << r << " ";
    }
    cout << endl;
    return 0;
}
