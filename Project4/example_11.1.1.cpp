#include <iostream>

using namespace std;

class Point 
{
    private:
        int x, y;
    public:
        void set(int new_x, int new_y);
        int get_x();
        int get_y();
        void set_x(int new_x);
        void set_y(int new_y);
};


int main(int argc, char const *argv[])
{
    Point pt1, pt2, pt3;

    pt1.set(10,20);
    cout << "pt1 is " << pt1.get_x() << ", " << pt1.get_y() << endl;
    pt2.set(115, 200);
    cout << "pt2 is " << pt2.get_x() << ", " << pt2.get_y() << endl;

    pt3.set_x(-10);
    pt3.set_y(-2);
    cout << "pt3 is " << pt3.get_x() << ", " << pt3.get_y() << endl;
    return 0;
}

void Point::set(int new_x, int new_y)
{
    if (new_x >= 100)
        new_x = 100;
    if (new_y >= 100)
        new_y = 100;
    x = new_x;
    y = new_y;
}

int Point::get_x()
{
    return x;
}

int Point::get_y()
{
    return y;
}

void Point::set_x(int new_x)
{
    if (new_x < 0)
        new_x *= -1;
    x = new_x;
}

void Point::set_y(int new_y)
{
    if (new_y < 0)
        new_y *= -1;
    y = new_y;
}