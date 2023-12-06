//Nirbindhya Ghimire
//tvo18
//lab1
//03/09/2023

#include <iostream>

using namespace std;

int main()
{
    string name;
    float weight;
    float height;
    float bmi;

    cout<<"Enter your name:"<< endl;
    cin>> name;
    cout << "What is your total weight in pounds?" << endl;
    cin>> weight;
    cout << "What is your height in inches?" << endl;
    cin>> height;
    cout << "bmi" << endl;
    bmi=(weight/(height*height)*703);
    cout <<bmi; 

return 0;
}