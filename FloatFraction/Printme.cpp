#include <iostream>
using namespace std;

class Printable 
{
    virtual void print_me(ostream &os) = 0;

    friend ostream &operator<<(ostream &os, Printable &pr);
};

ostream &operator<<(ostream &os, Printable &pr)
{
    pr.print_me(os);
    return os;
}

class P_int : public Printable 
{
public:
    int n;
    
    P_int() {};
    P_int(int new_n) {n = new_n;}
    void print_me(ostream &os);
};

class P_dbl : public Printable
{
public:
    double val;

    P_dbl() {};
    P_dbl(double new_val) {val = new_val;}
    void print_me(ostream &os);
};

void P_int::print_me(ostream &os)
{
    os << n;
}

void P_dbl::print_me(ostream &os)
{
    os << " " << val;
}

int main(int argc, char const *argv[])
{
    Printable *p;
    P_int num1(5);
    P_dbl num2(6.25);
    
    p = &num1;
    cout << "Here is a number: " << *p << endl;
    p = &num2;
    cout << "Here is another: " << *p << endl;
    return 0;
}
