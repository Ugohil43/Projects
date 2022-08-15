#include "Fract.h"

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

Fraction Fraction::add(const Fraction &other)
{
    Fraction fract;
    int lcd = lcm(den, other.den);
    int quot1 = lcd/den;
    int quot2 = lcd/other.den;
    fract.set(num * quot1 + other.num * quot2, lcd);
    fract.normalize();
    return fract;  
}

Fraction Fraction::mult(const Fraction &other)
{
    Fraction fract;
    fract.set(num * other.num, den * other.den);
    fract.normalize();
    return fract;
}

Fraction Fraction::sub(const Fraction &other)
{
    Fraction fract;
    int lcd = lcm(den, other.den);
    int quot1 = lcd/den;
    int quot2 = lcd/other.den;
    fract.set(num * quot1 - other.num * quot2, lcd);
    fract.normalize();
    return fract;
}

Fraction Fraction::div(const Fraction &other)
{
    Fraction fract;
    fract.set(num * other.den, den * other.num);
    fract.normalize();
    return fract;
}

bool Fraction::operator>(const Fraction &other)
{
    return ((num * other.den) > (den * other.num));
}

bool Fraction::operator<(const Fraction &other)
{
    return ((num * other.den) < (den * other.num));
}