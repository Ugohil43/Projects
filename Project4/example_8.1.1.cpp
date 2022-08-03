#include <iostream>
#include <fstream>
#include <string.h>

using namespace std;

int main()
{
    char filename[81];
    char way_to_file[81];

    cout << "Enter a file name and press ENTER: ";
    cin.getline(filename, 80);
    cout << "Enter way to file and press ENTER: ";
    cin.getline(way_to_file, 80);

    cout << "-------------------" << endl;
    cout << filename << endl;
    cout << "-------------------" << endl;

    cout << "-------------------" << endl;
    cout << way_to_file << endl;
    cout << "-------------------" << endl;

    strncat(way_to_file,filename, strlen(way_to_file) - 80);

    cout << "-------------------" << endl;
    cout << way_to_file << endl;
    cout << "-------------------" << endl;

    ofstream file_out(way_to_file);
    if (! file_out)
    {
        cout << "File " << way_to_file;
        cout << " could not be opened.";
        return -1;
    }
    cout << "File " << way_to_file << " was opened." << endl;
    file_out << "I am Blaxxon," << endl;
    file_out << "the cosmic computer." << endl;
    file_out << "Fear me.";
    file_out.close();
    return 0;
}
