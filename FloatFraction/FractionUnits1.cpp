#include <iostream>
#include <string>
#include "Fract.h"
using namespace std;

class FractionUnits : public Fraction
{
public:
    string units;

    FractionUnits() {set(0, 1);}
    FractionUnits(int n, int d) {set(n, d);}
    FractionUnits(int n) {set(n, 1);}
    FractionUnits(const Fraction &src) {set(src.get_num(), src.get_den());}
    FractionUnits(const FractionUnits &src) {set(src.get_num(), src.get_den()); units = src.units;}

    FractionUnits add(const FractionUnits &other);
    FractionUnits mult(const FractionUnits &other);
    FractionUnits operator+(const FractionUnits &other) {return add(other);}
    FractionUnits operator*(const FractionUnits &other) {return mult(other);}
    int operator==(const FractionUnits &other);

    friend ostream &operator<<(ostream &os, FractionUnits &fr); 
};

int main(int argc, char const *argv[])
{
    FractionUnits f1(1, 2), f2(4, 3);
    f1.units = "feet";
    f2.units = "feet";
    FractionUnits f3 = f1 + f2;
    cout << "The length of the item is " << f3 << endl;
    FractionUnits f4 = f1 * f2;
    cout << "The length of f1 * f2 is " << f4 << endl;
    return 0;
}

FractionUnits FractionUnits::add(const FractionUnits &other)
{
    FractionUnits fr = Fraction::add(other);
    if (units == other.units)
        fr.units = units;
    return fr;
}

FractionUnits FractionUnits::mult(const FractionUnits &other)
{
    FractionUnits fr = Fraction::mult(other);
    fr.units == units + "*" + other.units;
    return fr;    
}

int FractionUnits::operator==(const FractionUnits &other)
{
    return Fraction::operator==(other) && units == other.units;
}

ostream &operator<<(ostream &os, FractionUnits &fr)
{
    os << fr.get_num() << "/" << fr.get_den();
    if (fr.units.size() > 0)
        os << " " << fr.units;
    return os;
}