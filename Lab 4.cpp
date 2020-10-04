#include "DivSales.h"
#include <iostream>
#include <iomanip>
#include <fstream>
#include <string>
using namespace std;

int main() {
	DivSales divisions[6];
	string data;
	int iter = 0;
	int division = 0;
	int quarter = 0;
	for (DivSales div : divisions)
	{
		div.setDivSales(0);
		div.setCorpSales(0);
		//debug 
		cout << div.getCorpSales() << endl;
		cout << div.getDivSales() << endl;
	}// init each division to 0
	ifstream File("SalesFile.txt");
	while (getline(File, data)) {
		divisions[division].qtrs[quarter] = stod(data); //set quarter
		divisions[division].setDivSales(stod(data)); //add quarter to divsales
		divisions[division].setCorpSales(stod(data)); //add quarter to corpsales
		iter++; //add iterator
		if (iter % 4 == 0) {
			division++; //add one to division every 4 loops
		}
		quarter++;
		quarter = quarter % 4; // keep quarter between 0-3
	}
	int input = 1;
	while (input) {
		cout << "Enter a division (1-6) or 0 to quit: ";
		cin >> input;
		if (input == 0) {
			cout << "\tTotal corporate sales: $" << &DivSales::getCorpSales;
			return 0;
		}
		else {
			cout << "\tDivision #" << input << "\tQuarter 1 sales: $" << divisions[input - 1].qtrs[0] << endl;
			cout << "\tDivision #" << input << "\tQuarter 2 sales: $" << divisions[input - 1].qtrs[1] << endl;
			cout << "\tDivision #" << input << "\tQuarter 3 sales: $" << divisions[input - 1].qtrs[2] << endl;
			cout << "\tDivision #" << input << "\tQuarter 4 sales: $" << divisions[input - 1].qtrs[3] << endl;
			cout << "\n";
			cout << "\tDivision #" << input << " total sales are: $" << divisions[input - 1].getDivSales() << endl;
		}
	}
	
	
}