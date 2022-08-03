#include <iostream>
#include <fstream>
#include <string.h>

using namespace std;

int main(int argc, char const *argv[])
{
    for (int i = 1; i < sizeof(argv); i++)
    {
        cout << argv[i] << endl;
    }
    return 0;
}
