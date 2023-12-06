//Nirbindhya Ghimire
//tvo18
//Oct 31,2023

//Lab 9
//Description: this program will compute the frequency of each unique number in an array
//****************This is the line of 80 characters in length*******************
//############Your code should not exceed the length of the above line##########
#include <iostream>
#include <iomanip>
#include <ctime>
#include <cstdlib>
using namespace std;  

int main()
{
    int SIZE; // Number of elements to be stored in an array

    // Prompt the user for an array size
    cout << "Enter the size of an array: ";
    cin >> SIZE;

    int nums[SIZE], frequency[11] = {0}; 
    int maxFrequency = 0;
    int mostFrequentNumber = 0;

    srand(time(0));

    for (int i = 0; i < SIZE; i++)
    {
        nums[i] = rand() % 10 + 1;
        frequency[nums[i]]++;
    }

    cout << "\nNumbers in the array are: ";
    for (int i = 0; i < SIZE; i++)
    {
        cout << nums[i] << " ";
    }
    cout << endl;

    cout << "Frequency of each number:" << endl;
    for (int i = 1; i <= 10; i++)
    {
        cout << i << " : " << frequency[i] << endl;
        if (frequency[i] > maxFrequency)
        {
            maxFrequency = frequency[i];
            mostFrequentNumber = i;
        }
    }

    cout << "Number with the highest frequency: " << mostFrequentNumber << " occurred "
    << maxFrequency << " times" << endl;

    return 0;
}