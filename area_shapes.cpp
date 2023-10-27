#include<iostream>
using namespace std;
class Shapes
{
public:
    void square()
    {
        float side, area, perimeter;
        cout << "Enter side of square: ";
        cin >>side;
        area = side*side;
        perimeter = 4*side;
        cout << "\nThe area is: " << area << "\nAnd the perimeter is: " << perimeter << endl;
    }
    void circle()
    {
        float radius, area, circumference;
        cout << "Enter radius of circle: ";
        cin >>radius;
        area = 3.14*radius*radius;
        circumference = (2*radius)*3.14;
        cout << "\nThe area is: " << area << "\nAnd the circumference is: " << circumference << endl;
    }
    void rectangle()
    {
        float length, breadth, area, perimeter;
        cout << "Enter length of rectangle: ";
        cin >>length;
        cout << "Enter breadth of rectangle: ";
        cin >>breadth;
        area = length*breadth;
        perimeter = 2*(length+breadth);
        cout << "\nThe area is: " << area << "\nAnd the perimeter is: " << perimeter << endl;
    }
    void triangle()
    {
        float side, height, area, perimeter;
        cout << "Enter side of equilateral triangle: ";
        cin >>side;
        cout << "Enter height of equilateral triangle: ";
        cin >>height;
        area = 0.5*height*side;
        perimeter = 3*side;
        cout << "\nThe area is: " << area << "\nAnd the perimeter is: " << perimeter << endl;
    }
};

int main()
{
    Shapes shape;
    cout << "Square" << endl;
    shape.square();
    cout << "\n\n";
    cout << "Rectangle" << endl;
    shape.rectangle();
    cout << "\n\n";
    cout << "Circle" << endl;
    shape.circle();
    cout << "\n\n";
    cout << "Triangle" << endl;
    shape.triangle();
    cout << "\n\n";
    return 0;
}
