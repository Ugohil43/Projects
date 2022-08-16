#include <iostream>
using namespace std;

class Printable 
{
    virtual void print_me(ostream &os) = 0;

    friend ostream &operator<<(ostream &os, Printable &pr);
};

class Fraction : public Printable
{
    private: 
        int num, den;
    public:
        Fraction() {set(0, 1);}
        //Fraction() {num = 0; den = 0; normalize();}
        Fraction(int n, int d) {set(n, d);}
        Fraction(int n) {set(n, 1);}
        Fraction(const Fraction &src) {set(src.num, src.den); normalize();}

        void print_me(ostream &os) {os << *this;}

        void set(int n, int d)
        {
            num = n; den = d; normalize();
        }

        int get_num() const {return num;}
        int get_den() const {return den;}
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
    protected:
        virtual void normalize();
    private:
        int gcf(int a, int b);
        int lcm(int a, int b);
};