#include <iostream>
using namespace std;

class Fraction
{
    private: 
        int num, den;
    public:
        Fraction() {set(0, 1);}
        //Fraction() {num = 0; den = 0; normalize();}
        Fraction(int n, int d) {set(n, d);}
        Fraction(int n) {set(n, 1);}
        Fraction(Fraction const &src) {set(src.num, src.den); normalize();}

        void set(int n, int d)
        {
            num = n; den = d; normalize();
        }

        int get_num() {return num;}
        int get_den() {return den;}
        Fraction add(const Fraction &other);
        Fraction mult(const Fraction &other);
        Fraction sub(const Fraction &other);
        Fraction div(const Fraction &other);
        Fraction operator+(const Fraction &other) {return add(other);}
        Fraction operator*(const Fraction &other) {return mult(other);}
        Fraction operator-(const Fraction &other) {return sub(other);}
        Fraction operator/(const Fraction &other) {return div(other);}
        bool operator>(const Fraction &other);
        bool operator<(const Fraction &other);
        bool operator==(const Fraction &other) {return (num == other.num && den == other.den);}
        friend ostream &operator<<(ostream &os, Fraction &fr) {return (os << fr.num << "/" << fr.den);}
    private:
        void normalize();
        int gcf(int a, int b);
        int lcm(int a, int b);
};