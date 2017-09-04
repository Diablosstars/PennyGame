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
		string newLine, temp = "TTT";

		int testCases = 0;
		
		fin >> testCases;

		for (int j = 0; j < testCases; j++)
		{
			int TTT = 0, TTH = 0, THT = 0, THH = 0, HTT = 0, HTH = 0, HHT = 0, HHH = 0;
			fin >> newLine;

			for (int i = 0; i < 38; i++)
			{
				temp[0] = newLine[i];
				temp[1] = newLine[i + 1];
				temp[2] = newLine[i + 2];

				if (temp == "TTT") TTT++;
				else if (temp == "TTH") TTH++;
				else if (temp == "THT") THT++;
				else if (temp == "THH") THH++;
				else if (temp == "HTT") HTT++;
				else if (temp == "HTH") HTH++;
				else if (temp == "HHT") HHT++;
				else HHH++;

			}
			fout << TTT << " " << TTH << " " << THT << " " << THH << " " << HTT << " " << HTH << " " << HHT << " " << HHH << endl;
		}

		fout.close();
		fin.close();
	}
	else {
		cout << "Input file not found." << endl;
	}
}