// CPlusPlus17GetttingStartedSection03-02.cpp : This file contains the 'main' function. Program execution begins and ends there.
//


#include <iostream>
#include <map>
#include <iterator> 

using namespace std;

int main() {

	map<string, long long> contacts;

	contacts["Jegan"] = 12345890;
	contacts["Meena"] = 52345890;
	contacts["Nitesh"] = 62567290;
	contacts["Sriram"] = 99567890;
	contacts["Sriram"] = 13457670;

	auto pos = contacts.find("Sriram");

	if (pos != contacts.end())
		cout << "\nMobile number of "
		<< pos->first << " is " << pos->second << endl;
	else
		cout << "\nContact not found." << endl;

	return 0;
}
