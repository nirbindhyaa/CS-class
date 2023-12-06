//Nirbindhya Ghimire
//tvo18
//Nov14,2023
//lab11

#include <iostream>
#include <string>

using namespace std;

struct Car {
    string make;
    int year;
    int quantity;
};

int main() {
    const int SIZE = 3;
    Car cars[SIZE];
    int total = 0, highestInventory = 0, lowestInventory = 0;

    for (int i = 0; i < SIZE; ++i) {
        cout << "Record #" << i + 1 << endl;
        cout << "Enter make: ";
        cin >> cars[i].make;
        cout << "Enter year: ";
        cin >> cars[i].year;
        cout << "Enter quantity: ";
        cin >> cars[i].quantity;

        total += cars[i].quantity;

        if (cars[i].quantity > cars[highestInventory].quantity) {
            highestInventory = i;
        }

        if (cars[i].quantity < cars[lowestInventory].quantity) {
            lowestInventory = i;
        }

        cout << endl;
    }

    cout << "Total Inventory: " << total << endl;
    cout << "Highest Inventory: " << cars[highestInventory].make << endl;
    cout << "Lowest Inventory: " << cars[lowestInventory].make << endl;

    return 0;
}