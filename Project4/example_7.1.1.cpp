#include <iostream>
#include <string.h>
#define STRMAX 599

using namespace std;

int main(int argc, char const *argv[])
{
    char str[STRMAX+1];
    char name[100];
    char addr[200];
    char work[200];

    cout << "Enter name and press ENTER: ";
    cin.getline(name, 99);
    cout << "Enter address and press ENTER: ";
    cin.getline(addr, 199);
    cout << "Enter workplace and press ENTER: ";
    cin.getline(work, 199);

    strncpy(str, "\nMy name is ", STRMAX);
    strncat(str, name, STRMAX - strlen(str));
    strncat(str, ", I live at ", STRMAX - strlen(str));
    strncat(str, addr, STRMAX - strlen(str));
    strncat(str, ",and I work at ", STRMAX - strlen(str));
    strncat(str, work, STRMAX - strlen(str));
    strncat(str, ".", STRMAX - strlen(str));

    cout << str << endl;

    return 0;
}
