// Nirbindhya Ghimire
//10/31/2023
// Prelab 9
#include <iostream>
using namespace std;

int main()
{
    const int SIZE = 7; //size of an array
    
    // array that hold 7 characters
    char charArray[SIZE];
    
    cout << "Please enter 7 characters: " << endl;
    
    // For loop takes 7 characters from user and store them
    for (int i = 0 ; i < SIZE ; i++)
    {
        //Taking user input and storing it in array
        cin >> charArray[i];
    }
    // for loop for printing the array backward
    for (int i = SIZE ; i >= 0 ; i-- )
    {
        cout << charArray[i] << endl;
    }
}