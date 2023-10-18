/*2. create a class representing a shape with attributes like width and height.
Derive at least 2 shapes(Circle, rectangle). Use a smart pointer to manage the memory shape object.*/

#include <iostream>
#include <math.h>
// C1: Use declaration & defintaion DESIGN
// C2: Never use this globally. Use fully qualified name
// C3: No Globals. If Urgent use static const_expr
// Use UI(Uniform Initialization)
using namespace std; 
double PI = 3.14159; //
class Shape
{

public:
    virtual void calculateArea() = 0;
    virtual void calculatePerimeter() = 0;
    virtual void resultDisplay() = 0;
    Shape()
    {
        cout<<"\nShape()";
    }
    virtual ~Shape()
    {
        cout<<"\nvirtual ~Shape()";
    }
protected:
    double ca;
    double cp;
};

class Circle : public Shape
{
private:
    double radius;

public:
    Circle(double r = 0.0) : radius(r)
    {
    }
    ~Circle() {
        std::cout << "\n~Circle()\n";
    }
    void calculateArea()
    {
        ca = PI * pow(radius, 2);
    }
    void calculatePerimeter()
    {
        cp = 2 * PI * radius;
    }
    void resultDisplay()
    {
        cout << "\nArea of Circle :" << ca;
        cout << "\nPerimeter of Circle :" << cp;
    }
};

class Rectangle : public Shape
{
private:
    double length, width;

public:
    Rectangle(double l = 0.0, double w = 0.0) : length(l), width(w)
    {
    }
    ~Rectangle() {
        std::cout << "\n~Rectangle()\n";
    }
    void calculateArea()
    {
        ca = length * width;
    }
    void calculatePerimeter()
    {
        cp = 2 * (length + width);
    }
    void resultDisplay()
    {
        cout << "\nArea of Rectangle :" << ca;
        cout << "\nPerimeter of Rectangle :" << cp;
    }
};
class SmartPointer
{
    Shape *Shape_ptr;

public:
    SmartPointer(Shape *ptr) : Shape_ptr(ptr)
    {
        cout << "\nSmartPointer()";
    }
    ~SmartPointer()
    {
        cout << "\n~SmartPointer()";
        delete Shape_ptr;
    }
    Shape &operator*()
    {
        return *Shape_ptr;
    }
    Shape *operator->()
    {
        return Shape_ptr;
    }
};

int main()
{

    SmartPointer sp1(new Circle(7.0));
    sp1->calculateArea();
    sp1->calculatePerimeter();
    sp1->resultDisplay();

    SmartPointer sp2(new Rectangle(4.2, 8.0));
    sp2->calculateArea();
    sp2->calculatePerimeter();
    sp2->resultDisplay();

    /*Shape *Shape_ptr=new Circle(7.0);
    Shape_ptr->calculateArea();
    Shape_ptr->calculatePerimeter();
    Shape_ptr->resultDisplay();

    Shape_ptr=new Rectangle(4.2, 8.0);
    Shape_ptr->calculateArea();
    Shape_ptr->calculatePerimeter();
    Shape_ptr->resultDisplay();*/

    return 0;
}