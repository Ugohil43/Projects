#include <iostream>
#include <fstream>
#include <string.h>

using namespace std;

char model[21];
char mark[21];
char age[6];

int get_int(int default_value)
{
    char s[81];
    cin.getline(s, 80);
    if (strlen(s) == 0)
        return default_value;
    return atoi(s);
}

int main()
{
    char filename[81];
    int n, probeg, recsize = sizeof(model) + sizeof(mark) + sizeof(age) + sizeof(probeg);

    cout << "Enter file name: ";
    cin.getline(filename, 80);

    fstream fbin(filename, ios::binary | ios::in | ios::out);
    if (!fbin)
    {
        cout << "Could not open file " << filename;
        return -1;
    }

    while (1)
    {
        cout << "Enter file record number (or -1 to exit): ";
        n = get_int(0);

        if (n == -1)
            break;
        cout << "Enter model: ";
        cin.getline(model, 20);
        cout << "Enter mark: ";
        cin.getline(mark, 20);
        cout << "Enter age: ";
        cin.getline(age, 5);
        cout << "Enter probeg: ";
        probeg = get_int(0);

        fbin.seekp(n *recsize);
        fbin.write(model, 20);
        fbin.write(mark, 20);
        fbin.write(age, 5);
        fbin.write(reinterpret_cast<char*>(&probeg), sizeof(int));
    }
    fbin.close();
    return 0;
}
