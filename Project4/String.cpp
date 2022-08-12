#include <iostream>
#include <stdlib.h>
#include <string.h>
using namespace std;

class String{
    private:
        char *ptr;
    public:
        String();
        String(const char *s);
        String(const String &src);
        String(int n);
        ~String();

        int operator==(const String &other);
        void cpy(const char *s);
        void cat(const char *s);
        bool operator>(const String &other);
        bool operator<(const String &other);
        String& operator=(const String &src) {cpy(src.ptr); return *this;}
        String& operator=(const char *s) {cpy(s); return *this;}
        friend String operator+(String str1, String str2);
        friend String operator+(const char *s, String str);
        friend String operator+(String str, const char *s);
        char&  operator[](const int i) {return ptr[i];}
        operator char*() {return ptr;}

        int convert_to_integer() {return atoi(ptr);}
        double convert_to_double() {return atof(ptr);}
};

int main(int argc, char const *argv[])
{
    /*
    String a ("abc");
    String b ("xyz");
    String c;
    cout << "The value of a is: " << endl;
    cout << a << endl;
    cout << "The value of b is: " << endl;
    cout << b << endl;
    cout << "The value of c is: " << endl;
    cout << c << endl;
    if (a > b)
    cout << "a > b" << endl;
    else
    cout << "a < b" << endl;
    if (a < b)
    cout << "a < b" << endl;
    else
    cout << "a > b" << endl;
    return 0;
    
    String a ("Hello, ");
    String b ("world! ");
    String c = a + b + "My name is Ilya";
    cout << c << endl;
    */
    String a, b ,c, h, k;
    a = "I ";
    b = "am ";
    c = "so ";
    String d = "Hi. " + a + b + c + "very happy!\n";
    cout << d << endl;
    cout << "Item: " << d[12] << endl;

    h = "43508340";
    cout << h << endl;
    cout << h.convert_to_integer() << endl;

    k = "4350.543534";
    cout << k << endl;
    cout << k.convert_to_double() << endl;
    
    String m (5);
    cout << m << endl;
    return 0;
}

String::String()
{
    ptr = new char[1];
    ptr[0] = '\0';
}

String::String(const char *s)
{
    int n = strlen(s);
    ptr = new char[n+1];
    strcpy(ptr, s);
}

String::String(const String &src)
{
    int n = strlen(src.ptr);
    ptr = new char[n + 1];
    strcpy(ptr, src.ptr);
}

String::String(int n)
{
    ptr = new char[n+1];
    for (int i = 0; i < n; i++)
        ptr[i] = ' ';
    ptr[n] = '\0';
}

String::~String()
{
    delete [] ptr;
}

int String::operator==(const String &other)
{
    return (strcmp(ptr, other.ptr) == 0);
}

bool String::operator>(const String &other)
{
    int x = strcmp(ptr, other.ptr);
    if (x > 0)
    return 1;
    else
    return 0;
}

bool String::operator<(const String &other)
{
    int x = strcmp(ptr, other.ptr);
    if (x < 0)
    return 1;
    else
    return 0;    
}

void String::cpy(const char *s)
{
    delete [] ptr;
    int n = strlen(s);
    ptr = new char[n + 1];
    strcpy(ptr, s);
}

void String::cat(const char *s)
{
    int n = strlen(ptr) + strlen(s);
    char *p1 = new char[n + 1];
    strcpy(p1, ptr);
    strcat(p1, s);
    delete [] ptr;
    ptr = p1;
}

String operator+(String str1, String str2) 
{
    String new_str(str1);
    new_str.cat(str2);
    return new_str;
}

String operator+(String str, const char *s)
{
    String new_str(str);
    new_str.cat(s);
    return new_str;
}

String operator+(const char *s, String str)
{
    String new_str(s);
    new_str.cat(str);
    return new_str;
}