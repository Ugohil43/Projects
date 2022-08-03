#include <iostream>
#include <fstream>
#include <string.h>

using namespace std;

int main(int argc, char const *argv[])
{
    int c, i, end = 24;
    char filename[81];
    char input_line[81];

    cout << "Enter a file name and press ENTER: ";
    cin.getline(filename,80);

    ifstream file_in(filename);

    if (! file_in)
    {
        cout << "File " << filename;
        cout << " could not be opened.";
        return -1;
    }

    while (1)
    {
        for (i = 1; i <= end && ! file_in.eof(); i++)
        {
        file_in.getline(input_line, 80);
        cout << input_line << endl;
        }
        if (file_in.eof())
            break;
        cout << "More? Enter how strings show (Press 'Q' and ENTER to quit.): ";
        cin.getline(input_line, 80);
        c = input_line[0];
        if (c == 'Q' || c == 'q')
            break;
        else
        if (strlen(input_line) > 0)
            end = atoi(input_line);
    }
    return 0;
}
