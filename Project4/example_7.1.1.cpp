#include <iostream>
#include <string.h>

using namespace std;

int main(int argc, char const *argv[])
{
    char str[600];
    char name[100];
    char addr[200];
    char work[200];

    cout << "Enter name and press ENTER: ";
    cin.getline(name, 99);
    cout << "Enter address and press ENTER: ";
    cin.getline(addr, 199);
    cout << "Enter workplace and press ENTER: ";
    cin.getline(work, 199);

    strncpy(str, "\nMy name is ", 599);
    strncat(str, name, 599 - strlen(str));
    strncat(str, ", I live at ", 599 - strlen(str));
    strncat(str, addr, 599 - strlen(str));
    strncat(str, ",and I work at ", 599 - strlen(str));
    strncat(str, work, 599 - strlen(str));
    strncat(str, ".", 599 - strlen(str));

    cout << str << endl;

    return 0;
}
