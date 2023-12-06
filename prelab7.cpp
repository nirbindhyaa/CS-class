//Nirbindhya Ghimire
//tvo18
//Oct 17,2023
//Lab 7 Prelab Assignment

// Move the indicated code into functions.

#include <iostream>
using namespace std;

void Welcome();
double cost();

int main()
{
    void Welcome();
    
    double payment = cost();
    
    cout << "Each payment cost will be:" << payment;
    
    return 0;
}

    int payments;
    float principal;

    // TODO - write a void function to print out to console this welcome message
    void Welcome()
    {
    cout << "Welcome to my fabulous payment calculator!" << endl
         << "This program will take a principal amount and a number of payments , and" << endl
         << "return the cost of each payment!"
         << endl << endl;
    }
    // TODO - write a function that will prompt the user for the principal ammount,
    // and a number of payments. Then calculate and return the cost of each
    // payment (returns a double). Remember to assign the retuned value
    // to the variable 'payment'.
    double cost()
{
        double payment;
        int payments;
        float principal;
    
    cout << "please enter a principal ammount : ";
    cin >> principal;
    cout << "please enter a number of payments: ";
    cin >> payments;
    payment = static_cast <double>((1.2*principal)/payments);
    return payment;
}
    