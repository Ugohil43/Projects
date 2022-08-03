#include <iostream>
#include <string>

using namespace std;

int main(int argc, char const *argv[])
{
    string str, name, poroda, age;

    cout << "Enter name of dog: ";
    getline(cin, name);
    cout << "Enter porody of dog: ";
    getline(cin, poroda);
    cout << "Enter age of dog: ";
    getline(cin, age);

    str = "\nMy dog's name is " + name + ", his poroda is " + poroda + " and he is " + age + " years old.";
    cout << str; 
    return 0;
}
