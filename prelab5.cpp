//Nirbindhya Ghimire
//tvo18
//Oct3,2023

// Lab 5 Pre-Lab

// Finish the following program which adds up all integers from 1 to 
// the user's given number inclusively using a FOR loop. The total should be 
// assigned to the variable 'total'.

#include <iostream>
using namespace std;


int main()
{
    int num;
    int sum;

    cout << "Enter a positive integer to find the summation of"
         << " all numbers from 1 to the given number." << endl;
    cin >> num;
    
    // TODO - Add your code here
    for (int i=1; i<=num; i++)
    {
        sum += i;
    }
    
    cout << "Total : " << sum << endl;
    
    return 0;
}