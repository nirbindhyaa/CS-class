//Nirbindhya Ghimire
//tvo18
//Lab4
//Sept 26, 2023

//TO-DO: Fill in the Authors Name Here
//TO-DO: Fill in the current date here
//CS1428 Lab
//Lab 4
//Description: this program will calculate the cost of a TV
//plan based on user choices.

//****************This is the line of 80 characters in length*******************
//############Your code should not exceed the length of the above line##########

#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
    char user_choice;  //user's choice
    double price; //price of monthly package
    char add_choices;

    // Ask the user for their plan choice:
    cout << "Enter the package name you wish to purchase: ";
    cin >> user_choice;

    // TODO: Use a switch statement to evaluate the total cost of the
    // customer's monthly bill based on the selected plan.
    switch (user_choice){
        case 'A':
        case 'a':
        {
            cout << "Would you like to purchase the sports plan?";
            cin >> add_choices;
            switch (add_choices){
                case 'y':
                case 'Y':
                price = 29.98;
                break;
                case 'n':
                case 'N':
                price = 19.99;
                break;
            }
            break;
        }
            case 'b':
            case 'B':
        {
                cout << "Would you like to purchase the sports plan?";
                cin >> add_choices;
                switch (add_choices) {
                    case 'y':
                    case 'Y':
                    price = 49.98;
                    break;
                    case 'n':
                    case 'N':
                    price = 39.99;
                    break;
            }
            break;
        }
            case 'c':
            case 'C':
            price = 45.99;
            break;
            
    default:
        cout << "Invalid input, terminating the program.";
    }
    cout << "The total price of your monthly package is $" << price << endl;

    // Exit the program:
    return 0;
}