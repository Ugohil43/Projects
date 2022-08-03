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

        fbin.seekp(n *recsize);

        fbin.read(model, 20);
        fbin.read(mark, 20);
        fbin.read(age, 5);
        fbin.read(reinterpret_cast<char*>(&probeg), sizeof(int));

        cout << "The model is: " << model << endl;
        cout << "The mark is: " << mark << endl;
        cout << "The year is: " << age << endl;
    }
    fbin.close();
    return 0;
}
