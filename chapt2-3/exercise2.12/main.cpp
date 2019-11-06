#include <iostream>
#include "Circle.h"
#include "Rectangle.h"

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
    cout << "cirrectcle\'s girth : " << girth_rect << endl;
    
    return 0;
}