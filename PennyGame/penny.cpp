// PennyGame
// Christian Ellison
#include <iostream>
#include <fstream>
#include <string>
// Other include files?
using namespace std;

void main() {
	ifstream fin("penny.in");
	if (fin.is_open()) {
		ofstream fout("penny.out");
		string newLine, temp;

		int TTT = 0 , TTH=0, THT=0, THH=0, HTT=0, HTH=0, HHT=0, HHH=0;
		getline(fin, newLine);

		for (int i = 0; i < 37; i++)
		{
			//temp = newLine[i] + newLine[i + 1] + newLine[i + 2];
			//cout << temp << endl;
			//if((newLine[i] + newLine[i+1] + newLine[i+2]) == "TTT")
		}


		fout.close();
		fin.close();
	}
	else {
		cout << "Input file not found." << endl;
	}
}