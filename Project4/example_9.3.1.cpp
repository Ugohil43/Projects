#include <iostream>
#include <string>

using namespace std;

int gcf(int a, int b);

int main(int argc, char const *argv[])
{
    try
    {
        cout << "gcf(12,18) = " << gcf(12, 18) << endl;
        cout << "gcf(125,45) = " << gcf(125, 45) << endl;
        cout << "gcf(5,0) = " << gcf(5, 0) << endl;
        return 0;
    }
    catch(string err)
    {
        cout << "EXCEPTION PAISED! " << endl;
        cout << err << endl;
        return -1;
    }
}

int gcf(int a, int b)
{
    if (b == 0)
        throw string("Division by error.");
    if (a % b == 0)
        return b;
    else
        return gcf(b, a % b);
}