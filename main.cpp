#include <iostream>
#include "Rectangle.h"
#include "Triangle.h"

using namespace std;
int main()
{
    Rectangle rect;
    Triangle tri;
    rect.setValues(4,5);
    tri.setValues(4,5);
    cout << rect.Area() << "\n";
    cout << tri.Area() << "\n";
    return 0;
}