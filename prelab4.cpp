//Nirbindhya Ghimire
//tvo18
//Sept 26, 2023
// PreLab 4 Assignment
//Lab13

// The following is an extremely scientific personality test that can predict
// how well you will do in this course.
// Fill in the area below with the requested code.

#include <iostream>

using namespace std;

int main()
{
     char user_input;
     string statement;

     cout << "Is Boba Fett better than Jango Fett? ('Y' or 'N')" << endl;
     cin >> user_input;

     // TODO - Change the following IF-ELSE statement to an
     // equivalent switch statement.
        switch (user_input)
        {
            case 'y':
            case 'Y':
                cout<< "You think Boba Fett is better than Jango Fett..." << endl;
                statement = "Wrong!";
                break;
            case 'n':
            case 'N':
                cout << "You do not think think Boba Fett is better than Jango Fett..." << endl;
                statement = "Correct!";
                break;
                default:
                statement = "Invalid Input";
                break;
        }
            cout << statement << endl;
            
        return 0;
}