#include <iostream>
#include "Fract.h"
using namespace std;

class FloatFraction : public Fraction
{
public:
    FloatFraction() {set(0, 1);}
    FloatFraction(int n, int d) {set(n, d);}
    FloatFraction(int n) {set(n, 1);}
    FloatFraction(Fraction const &src) {set(src.get_num(), src.get_den());}
    FloatFraction(double n) {set_float(n);}
    double get_float() { return (static_cast<double>(get_num()))/get_den();}
    void set_float(double n) {set(static_cast<int>(n * 100.0),100);}
};

int main(int argc, char const *argv[])
{
    FloatFraction fract1;
    fract1.set(1, 2);
    cout << "Value of 1/2 is " << fract1.get_float() << endl;
    fract1.set(3, 5);
    cout << "Vlaue of 3/5 is " << fract1.get_float() << endl;

    fract1.set_float(124.56);
    cout << "Vlaue of 124.56 is " << fract1.get_float() << endl;
    return 0;
}

