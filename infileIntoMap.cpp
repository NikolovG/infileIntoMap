#include<iostream>
#include<map>
#include<fstream>

using namespace std;

map<int, double> storeStuff(string fileName) {
	map<int, double> stored;

	int line;				// Key
	double line2;			// Value

	ifstream infile(fileName);  // Opens the file

	while (!infile.eof()) {
		infile >> line;		//  Designated for "Key"
		infile >> line2;	//  Designated for "Value"

		stored[line] = line2;  // Storing into map
	}

    infile.close();  // Always close the file after use 

	for(auto itr : stored){  // Print out map
		cout<< itr.first << " : "<< itr.second<<endl;
	}

	return stored;
}


int main() {
	string fileName = "stuff.txt";
	map<int, double> info;

	info = storeStuff(fileName); // Storing into new vector

	return 0;
}