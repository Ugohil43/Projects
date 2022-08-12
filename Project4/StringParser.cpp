#include <iostream>
#include <stdlib.h>
#include <string.h>
using namespace std;

class StringParser
{
private:
    int pos;
    int max_chars;
    char *input_str;
    char *delimiters;
public:
    StringParser(char *inp, char *delim) {input_str = inp; delimiters = delim; pos = 0; max_chars = 100;}
    StringParser(char *inp) {input_str = inp; delimiters = ",", pos = 0; max_chars = 100;}

    char *get(char *dest);
    int get_int();
    double get_dbl();
    int set_size(int new_size) {max_chars = new_size;}
    int more() {return input_str[pos] != '\0';}
    void reset() {pos = 0;}
};

int main(int argc, char const *argv[])
{
    char input_str[100];
    char substr[100];
    char *p;
    int n;
    double d;

    cout << "Enter input line: ";
    cin.getline(input_str, 99);

    StringParser parser(input_str, "/,");

    while (parser.more())
    {
        parser.get(substr);
        cout << substr << endl;
        //delete [] p;
    }
    return 0;
}

char *StringParser::get(char *dest)
{
    int j = 0, n = 0;
    //char *new_str;
    //new_str = new char[100];

    while (strchr(delimiters, input_str[pos]))
    {
        pos++;
    }
    
    while (input_str[pos] != '\0' && ! strchr(delimiters, input_str[pos]))
    {
        if (n++ < max_chars)
        //new_str[j++] = input_str[pos++];
        dest[j++] = input_str[pos++];
    }
    //new_str[j] = '\0';
    dest[j] = '\0';
    //return new_str;
    return dest;
}

int StringParser::get_int()
{
    /*
    char *p = get();
    return atoi(p);
    delete [] p;
    */
    char temp[256];
    get(temp);
    return atoi(temp);
}

double StringParser::get_dbl()
{
    /*
    char *p = get();
    return atof(p);
    delete [] p;
    */
    char temp[256];
    get(temp);
    return atof(temp);
}