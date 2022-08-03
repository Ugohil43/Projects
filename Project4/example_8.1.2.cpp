#include <iostream>
#include <fstream>
#include <string.h>

using namespace std;



int main()
{
    char input_line[101];

    ofstream file_out("test2.txt");
    if (! file_out)
    {
        cout << "File test2.txt could not be opened.";
        return -1;
    }
    while (1)
    {
        cout << "Enter >> ";
        cin.getline(input_line,100);
        if (strcmp(input_line,"") == 0)
            break;
        file_out << input_line << endl;
    }
    file_out.close();
    return 0;
}
