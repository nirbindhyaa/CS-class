//Nirbindhya Ghimire
//tvo18
//Sept 12,2023
//Lab2

#include <iostream>
#include <iomanip> // library for setw() and other i/o manipulators
#include <fstream> // library for file input and output

using namespace std;

int main() {

    string name;
    double SID, grade1, grade2, grade3, grade4;
    double avg;

    // Declare input file stream variable and open the input file:
    ifstream fin;
    fin.open("Student_data.txt");

    // TODO: Declare output file stream variable and open the output file:
    ofstream fout;
    fout.open ("averages.txt");
    

    // Error check to ensure the input file opened:
    if (!fin) {
        cout << "Could not open file. Terminating program." << endl;
        return -1;
    }
    fout << left;
    fout << setw(10) << "SID" << setw(13) << "name" << "average" << endl;
    
    fin >> SID >>  name >> grade1 >> grade2 >> grade3 >> grade4;
    avg = (grade1+ grade2 + grade3 + grade4)/4;
    fout << left;
    fout << setw(10) << SID << setw(13) << name << avg << endl;

    fin >> SID >>  name >> grade1 >> grade2 >> grade3 >> grade4;
    avg = (grade1+ grade2 + grade3 + grade4)/4;
    fout << left;
    fout << setw(10) << SID << setw(13) << name << avg << endl;
    
    fin >> SID >>  name >> grade1 >> grade2 >> grade3 >> grade4;
    avg = (grade1+ grade2 + grade3 + grade4)/4;
    fout << left;
    fout << setw(10) << SID << setw(13) << name << avg << endl;
    
    fin >> SID >>  name >> grade1 >> grade2 >> grade3 >> grade4;
    avg = (grade1+ grade2 + grade3 + grade4)/4;
    fout << left;
    fout << setw(10) << SID << setw(13) << name << avg << endl;
  
    cout << "Data written to averages.txt" << endl;

    // Close the input and output files:
    fout.close();
    fin.close();

    // Exit the program:
    return 0;
}