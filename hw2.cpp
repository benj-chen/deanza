/*
Author: Benjamin Chen
Program purpose: complete homework 2: https://docs.google.com/document/d/1TG76kjFup8zbkf_YeQmeFeJ-W-EPAC5NkTSKEmv6JAM/edit
*/
#include <iostream>
using namespace std;
int main() {
    cout << "My name is Benjamin Chen" << endl <<
    "This program calculates the volume and surface area of a cuboid." << endl;
    double length;
    cout << "Enter the cuboid length:";
    cin >> length;
    double height;
    cout << "Enter the cuboid height:";
    cin >> height;
    double width;
    cout << "Enter the cuboid width:";
    cin >> width;
    double cuboidVolume = length * height * width;
    double surfaceArea = (length*width + width*height + height*length)*2;
    cout << "Volume of the cuboid (length " << length << " height " << height
    << " width " << width << ") is " << cuboidVolume << endl;
    cout << "Surface area of the cuboid (length " << length << " height " << height
    << " width " << width << ") is " << surfaceArea << endl;

}