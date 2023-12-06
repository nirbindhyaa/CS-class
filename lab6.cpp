//Nirbindhya Ghimire
//tvo18
//Oct10,2023
//CS1428 Lab
//Lab 6

//Description: this program will play a simple guessing game with the user
//****************This is the line of 80 characters in length*******************
//############Your code should not exceed the length of the above line##########

#include <iostream>
#include <ctime>
#include <cstdlib>
//ADD OTHER LIBRARIES HERE
using namespace std;
int main()
{
    int comp_num;
    int user_num;
    int tries = 0;
// TODO: Assign a randomly generated number (1-10) to computer_number:
// Use srand(time(NULL)) to seed the random number generator
    
    // Generate the computer's choice randomly:
    srand(time(NULL));
    comp_num = rand() % 10 + 1;

// Use rand() to produce a random number between 0 and the maximum value of an
// TODO: Repeatedly prompt the user for input
// until the computer number is guessed:
// Output the result:
    do 
    {
        cout << "Pick a number from 1 to 10:" ;
        cin >> user_num;
        tries++;
        
        if (user_num < 1 || user_num > 10)
        {
            cout << "Error: Enter number between 1 to 10!" << endl;
        }
        
        else if (user_num > comp_num)
        {
            cout << "The secret number is lower." << endl;
        }
        else if (user_num < comp_num)
        {
            cout << " The secret number is higher." << endl;
        }
        else 
        {
            cout << "BINGO!! You guessed the secret number in " << tries << " tries!";
        }
    }
    while (user_num == comp_num);
   
return 0;
}