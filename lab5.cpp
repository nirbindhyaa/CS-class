//Nirbindhya Ghimire
//tvo18
//Oct3,2023
//Lab 5
//Description: this program will print a triangular pattern

//****************This is the line of 80 characters in length*******************
//############Your code should not exceed the length of the above line##########

#include <iostream>
using namespace std;

int main() {

    int num;

    // Prompt the user for a number:
    cout << "Enter a number: ";
    cin >> num;
    cout << endl;

    // TODO: Validate input, then print the pattern:
    if (num>=3 && num <= 10 ) 
    {
    for (int i = 0; i < num; i++ )
        {
        for (int j = num; j > i; j--)
        {
            if (j%2==0)
            {
                cout << "@" ;
            }
            else
            { 
                cout << "#";
            }
        }
            cout << endl;
        }
    } 
    else { 
    cout << "ERROR: Valid numbers are 3 to 10" << endl;
    }
    return 0;
}