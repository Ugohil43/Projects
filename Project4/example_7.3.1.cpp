#include <iostream>
#include <string.h>
#include <ctype.h>

using namespace std;

void convert_to_lower(char *s)
{
    //int length = strlen(s);
    //for (int i = 0; i < length; i++)
    //{
    //    s[i] = tolower(s[i]);
    //}

    while (*s != '\0')
    {
        *s = tolower(*s);
        *s++;
    }
    
    
}
int main(int argc, char const *argv[])
{
    char s[100];

    cout << "Enter string to convert and press ENTER: ";
    cin.getline(s, 99);

    convert_to_lower(s);
    cout << "The converted string is: " << endl;
    cout << s << endl;
    return 0;
}

