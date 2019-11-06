#include <iostream>
#include "Circle.h"
#include "Rectangle.h"
#include "Square.h"

using namespace std;

int main()
{
    double diameter = 10;
    Circle circle(diameter);
    double area = circle.getArea();
    double girth = circle.getGirth();
    cout << "circle\'s area : " << area << endl;
    cout << "circle\'s girth : " << girth << endl;

    Rectangle rect(3, 4);
    double area_rect = rect.getArea();
    double girth_rect = rect.getGirth();
    cout << "rect\'s area : " << area_rect << endl;
    cout << "rect\'s girth : " << girth_rect << endl;

    Square square(4);
    double area_square = square.getArea();
    double girth_square = square.getGirth();
    cout << "square\'s area : " << area_square << endl;
    cout << "square\'s girth : " << girth_square << endl;
    
    return 0;
}