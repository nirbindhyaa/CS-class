// Nirbindhya Ghimire
// tvo18
// 9/12/2023
// CS 1428 L13
// PRELAB 2 
#include <iostream>
#include <fstream>
using namespace std;
int main() {
    // here declare variables
    string name, name2;
    int year;
    // Declare input file stream variable and open file
    ifstream fin;
    fin.open("prelab_input.txt");
    // Test to see if file correctly opened or not
    if (!fin) {
        cout << "ERROR - File failed to open. Make sure that the input file and this file are in the same directory" << endl;
        return -1;
    }
    // Declare output file stream variable and open file
    ofstream fout;
    fout.open("flux_capacitor.txt");
    // ADD HERE write your code here
    // This reads data from input file, add 40 to the year, and write to the output file
    while (fin >> name >> name2 >> year) {
        year += 30;
        fout << name << " " << name2 << " " << "get backs in " << year << endl;
    }
    // Closing files
    fin.close();
    fout.close();
    return 0;
}