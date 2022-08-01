#include <iostream>

using namespace std;

int main()
{
    int i,n1,n2;
    cout << "Введите начало:";
    cin >> n1;
    cout << "Введите конец:";
    cin >> n2;
    i = n2;
    while (i >= n1)
    {
        cout << i << endl;
        i = i -1;
    }
    return 0;
}
