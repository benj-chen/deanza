/*
Author: Benjamin Chen
Program purpose: use parameters, pass by reference
*/
#include <iostream>
using namespace std;
bool rectangleAreaPerim(double width, double height, double& area, double& perimeter);
int main()
{
    double area, perim, width = 1, height = 1;
    cout << "This program calculates area and perimeter or rectangle.\n";
    while (true) {
        cout << "Enter width and height separated by spaces, or enter 0 0 to stop: ";
        cin >> width >> height;
        if (width || height) {
            if (rectangleAreaPerim(width, height, area, perim))
                cout << "Rectangle area is " << area << endl
                << "Rectangle perimeter is " << perim << endl;
            else cout << "Invalid input" << endl;
        }
        else {
            cout << "Goodbye\n";
            return 0;
        }
    }
}
bool rectangleAreaPerim(double width, double height, double& area, double& perimeter) {
    if (width < 0 || height < 0) return false;
    area = width * height;
    perimeter = (width + height) * 2; // or (width + height) << 1
    return true;
}