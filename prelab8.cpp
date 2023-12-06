//Nirbindhya Ghimire
//tvo18
//Oct 17,2023
//CS1428 Lab
//prelab8

#include <iostream>
using namespace std;

// Function prototypes
double getRadius();
double calcArea(double radius);
void printResults(double radius, double area);

int main()
{
    double radius, area;

    radius = getRadius();

    area = calcArea(radius);

    printResults(radius, area);

    return 0;
}

double getRadius()
{
    double radius;
    cout << "Enter the radius of the circle: ";
    cin >> radius;
    return radius;
}

double calcArea(double radius)
{
    const double PI = 3.14159;
    return PI * radius * radius;
}

void printResults(double radius, double area)
{
    cout << "The area of your circle with a radius of " << radius
         << " is " << area << " units squared." << endl;
}