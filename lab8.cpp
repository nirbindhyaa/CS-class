//Nirbindhya Ghimire
//tvo18
//Oct 27,2023
//lab8

#include <iostream>
using namespace std;

// Function Prototypes:
int getArea(int, int);
int getPerimeter(int, int);
void printRectangle(int, int, char);
bool isValidSideLength(int);

int main() 
{
    int width, height, perim, area;
    char symbol, cont;

    do {
        cout << "Please enter the following" << endl;
        cout << "Width: ";
        cin >> width;

        while (!isValidSideLength(width)) 
        {
            cout << "ERROR: Sides must be between 1 and 10." << endl
                 << "Enter the width: ";
            cin >> width;
        }

        cout << "Height: ";
        cin >> height;

        while (!isValidSideLength(height)) {
            cout << "ERROR: Sides must be between 1 and 10." << endl
                 << "Enter the height: ";
            cin >> height;
        }

        cout << "Desired symbol for the picture: ";
        cin >> symbol;

        perim = getPerimeter(width, height); //Function Call
        area = getArea(width, height); // Function Call

        cout << "\nPerimeter: " << perim << endl
             << "Area: " << area << endl
             << "Picture of your rectangle: " << endl;

        printRectangle(width, height, symbol);

        cout << "\nWould you like to draw another rectangle? (Y or N): ";
        cin >> cont;
    } while (cont == 'Y' || cont == 'y');

    return 0;
}

int getArea (int width, int height) 
{
    return width * height;
}

int getPerimeter (int width, int height)
{
    return 2 * (width + height);
}

void printRectangle (int width, int height, char symbol) 
{
        for (int i = 0; i < height; i++) 
    {
        for (int j = 0; j < width; j++)     
    {
            cout << symbol;
    }
        cout << endl;
    }
}

bool isValidSideLength(int length) 
{
    return length >= 1 && length <= 10;
}