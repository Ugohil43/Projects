#include <iostream>
#include <string.h>

using namespace std;

char strs[10][100];

int get_a_string(char *buffer, char *dest, int pos)
{
    int i = pos, j = 0;
    while (buffer[i] == ',' || buffer[i] == ' ')
        i++;
    if (buffer[i] == '\0')
        return -1;

    while (buffer[i] != ',' && buffer[i] != '\0')
    dest[j++] = buffer[i++];
    
    dest[j] = '\0';
    return i;   
}

int main(int argc, char const *argv[])
{
    int i, n, pos = 0;
    char buffer[200];

    cout << "Enter strings, separater by commas, and press ENTER: ";
    cin.getline(buffer, 199);

    for (i = 0; i < 10; i++)
    {
        pos = get_a_string(buffer, strs[i], pos);
        if (pos == -1)
            break;
    }
    
    if (i == 11)
        n = 10;
    else
        n = i;

    cout << n << " strings were read." << endl;
    for (int i = 0; i < n; i++)
    cout << strs[i] << endl;
    
    return 0;
}
