#include <iostream>
#include <stdlib.h>

using namespace std;

class Fraction
{
    private: 
        int num, den;
    public:
        //Fraction() { set(0, 1); }
        Fraction() { num = 0; den = 0; normalize(); }
        Fraction(int n, int d) { set(n, d); }
        Fraction(int n) { set(n, 1); }
        Fraction(Fraction const &src) { set(src.num, src.den); normalize(); }

        void set(int n, int d)
        {
            num =n; den = d; normalize();
        }

        int get_num() {return num;}
        int get_den() {return den;}
        Fraction add(Fraction other);
        Fraction mult(Fraction other);
        Fraction sub(Fraction other);
        Fraction div(Fraction other);
    private:
        void normalize();
        int gcf(int a, int b);
        int lcm(int a, int b);
};
int main(int argc, char const *argv[])
{
    /*
    int a, b;
    char str[81];
    Fraction fract;
    while (1)
    {
        cout << "Enter numerator: ";
        cin >> a;
        cout << "Enter denominator: ";
        cin >> b;
        fract.set(a, b);
        cout << "Numerator is " << fract.get_num() << endl;
        cout << "denominator is" << fract.get_den() << endl;
        cout << "Do again? (Y or N) ";
        cin >> str;
        if (!(str[0] == 'Y' || str[0] == 'y'))
            break;
    }
    */
    /*
    Fraction fract;
    fract.set(2,2);
    cout << "2/2             " << fract.get_num() << "/" << fract.get_den() << endl;
    fract.set(4,8);
    cout << "4/8             " << fract.get_num() << "/" << fract.get_den() << endl;
    fract.set(-9,-9);
    cout << "-9/-9           " << fract.get_num() << "/" << fract.get_den() << endl;
    fract.set(10,50);
    cout << "10/50           " << fract.get_num() << "/" << fract.get_den() << endl;
    fract.set(100,25);
    cout << "100/25          " << fract.get_num() << "/" << fract.get_den() << endl;
    */

    Fraction fract1, fract2, fract3;
    int a, b, c, d;
    while (1)
    {
        cout << "Enter numerator of first fract: ";
        cin >> a;
        cout << "Enter denominator of first fract: ";
        cin >> b;
        fract1.set(a,b);

        cout << "Enter numerator of second fract: ";
        cin >> c;
        cout << "Enter denominator of second fract: ";
        cin >> d;
        fract2.set(c,d);
        fract3 = fract1.div(fract2);
        cout << fract1.get_num() << "/" << fract1.get_den() <<  " / " << fract2.get_num() << "/" << fract2.get_den() << " = " << fract3.get_num() << "/" << fract3.get_den() << endl;
    }
    return 0;
}


void Fraction::normalize()
{
    if (den == 0 || num == 0)
    {
        num = 0;
        den = 1;
    }

    if (den < 0)
    {
        num *= -1;
        den *= -1;
    }

    int n = gcf(num, den);
    num /= n;
    den /= n;
}

int Fraction::gcf(int a, int b)
{
    if (a % b == 0)
        return abs(b);
    else
        return gcf(b, a % b);
}

int Fraction::lcm(int a, int b)
{
    return (a / gcf(a,b)) * b;
}

Fraction Fraction::add(Fraction other)
{
    Fraction fract;
    int lcd = lcm(den, other.den);
    int quot1 = lcd/den;
    int quot2 = lcd/other.den;
    fract.set(num * quot1 + other.num * quot2, lcd);
    fract.normalize();
    return fract;  
}

Fraction Fraction::mult(Fraction other)
{
    Fraction fract;
    fract.set(num * other.num, den * other.den);
    fract.normalize();
    return fract;
}

Fraction Fraction::sub(Fraction other)
{
    Fraction fract;
    int lcd = lcm(den, other.den);
    int quot1 = lcd/den;
    int quot2 = lcd/other.den;
    fract.set(num * quot1 - other.num * quot2, lcd);
    fract.normalize();
    return fract;
}

Fraction Fraction::div(Fraction other)
{
    Fraction fract;
    fract.set(num * other.den, den * other.num);
    fract.normalize();
    return fract;
}