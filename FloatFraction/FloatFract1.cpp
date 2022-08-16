#include <iostream>
#include "Fract.h"
using namespace std;

class FloatFraction : public Fraction
{
public:
    FloatFraction() {set(0, 1);}
    FloatFraction(int n, int d) {set(n, d);}
    FloatFraction(int n) {set(n, 1);}
    FloatFraction(const FloatFraction &src) {set(src.get_num(), src.get_den());}
    FloatFraction(const Fraction &src) {set(src.get_num(), src.get_den());}

    double get_float() { return (static_cast<double>(get_num()))/get_den();}
    void set_float(double n) {set(static_cast<int>(n * 100.0),100);}
};

class ProperFraction : public FloatFraction
{
public:
    ProperFraction() {set(0, 1);}
    ProperFraction(int n, int d) {set(n, d);}
    ProperFraction(int n) {set(n, 1);}
    ProperFraction(int w, int n, int d) {set(w * d + n, d);}
    ProperFraction(const ProperFraction &src) {set(src.Fraction::get_num(), src.get_den());}
    ProperFraction(const FloatFraction &src) {set(src.Fraction::get_num(), src.get_den());}
    ProperFraction(const Fraction &src) {set(src.Fraction::get_num(), src.get_den());}
    friend ostream &operator<<(ostream &os, ProperFraction &fr) {
    if (fr.get_whole() != 0)
        os << fr.get_whole() << " ";
    os << fr.get_num() << "/" << fr.get_den();
    }
    
    void pr_proper(ostream &os);
    int get_whole();
    int get_num();
};

int main()
{
    ProperFraction f1(1, 2), f2(5, 6), f3;
    ProperFraction f4(4, 2, 3);
    f3 = f1 + f2;
    cout << "Value of f3 is " << f3 << endl;
    cout << "Float value of f3 is " << f3.get_float() << endl;
    cout << "Value of f4 is " << f4 << endl;

    if (f3 == FloatFraction(4, 3))
        cout << "1/2 + 5/6 is equal to 1/3." << endl;
    return 0;
}

void ProperFraction::pr_proper(ostream &os)
{
    if (get_whole() != 0)
        os << get_whole() << " ";
    os << get_num() << "/" << get_den();
}

int ProperFraction::get_whole()
{
    int n = Fraction::get_num();
    return n / get_den();
}

int ProperFraction::get_num()
{
    int n = Fraction::get_num();
    return n % get_den();
}