#include <iostream>
using namespace std;

class Shape
{
public:
    virtual void area()
    {
        cout << "Area of shape" << endl;
    }
};

class Circle : public Shape
{
private:
    float radius;

public:
    Circle(float r)
    {
        radius = r;
    }

    void area() override
    {
        cout << "Area of Circle = "
             << 3.1416 * radius * radius << endl;
    }
};

int main()
{
    Circle c(5);

    c.area();

    return 0;
}
