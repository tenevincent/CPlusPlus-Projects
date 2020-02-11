// Chapter_8_1_01.cpp : This file contains the 'main' function. Program execution begins and ends there.
//



#include <iostream>
#include <fstream>
#include <sstream>
#include <string>
#include <iomanip>

using namespace std;
template <class T>
std::string getStatus(const T& stream, char* fileName) {
	ostringstream s;
	if (stream.is_open())
	{
		s << "File: " << fileName << " was successfully opened!\n";
	}
	else
	{
		s << "Failed to open file: " << fileName << endl;
	}
	return s.str();
}

std::string getFlags(const ios& stream) {
	stringstream s;
	s << boolalpha << "G:" << stream.good() << " E:" << stream.eof() << " F:" << stream.fail()
		<< " B:" << stream.bad();
	return s.str();
}

int main() {
	
	
	
	char badName[] = { "badfilename.txt" };
	char goodName[] = { "Chapter_8_1_01.cpp" };
	cout << "Trying to open not existing file: " << badName << "\n";
	ifstream file(badName);
	cout << "Status: " << getStatus(file, badName) << "Flags: " << getFlags(file) << endl << endl;
	cout << "Opening existing file for reading - using the same object, but with different file: " << goodName << "\n";

	file.open(goodName, ios_base::in);
	cout << "Status: " << getStatus(file, goodName) << "Flags: " << getFlags(file) << endl << endl;

	cout << "Reading contents of the file - there is an extra end of line character in the file :\n";
	int v;
	while (file >> v) {
		cout << v << ": flags: " << getFlags(file) << endl;
	}
	cout << "Status: " << getFlags(file) << endl << endl;
	file.close();



	cout << "Reading contents of the file - different way:\n";
	file.open(goodName, ios_base::in);
	while (file.good()) {
		file >> v;
		cout << v << ": flags: " << getFlags(file) << endl;
	}
	file.close();
	cout << "Status: " << getFlags(file) << endl;
	file.close();
	
	
	
	
	return 0;
}

// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
