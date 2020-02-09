// Utilities.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <algorithm> 
#include<string>
#include<vector>
#include <utility>



class Book {


private:
	int _id = 1;
	std::string _firstName;
	std::string _lastName;

public:
	Book(int id, std::string firstName, std::string lastName) :
		_id(id), _firstName(firstName), _lastName(lastName)
	{

	}

	// Copy assignment operator.
	Book& operator=(const Book& other)
	{

		if (this != &other)
		{
			_id = other._id;
			_firstName = other._firstName;
			_lastName = other._lastName;
		} 
		return *this;
	}



	Book(const Book& other): _id(other._id), _firstName
	(other._firstName), _lastName(other._lastName){

		std::cout << " copy constructor.." << std::endl;
	}


	Book& operator=(const Book&& other)
	{

		if (this != &other)
		{
			_id =  other._id;
			_firstName =  other._firstName;
			_lastName =  other._lastName;
		}
		return *this;
	}

	Book(Book&& other)  noexcept : _id(std::move(other._id)),
		_firstName(std::move(other._firstName))
		, _lastName(std::move(other._lastName)) {

		std::cout << " move constructor.." << std::endl;

	}

	// Book(Book&&  ) = default;




	int getId() const { return this->_id; }

	std::string getFirstName() const { return this->_firstName; }

	std::string getLastName() const { return this->_lastName; }


	friend bool operator< (const Book& c1, const Book& c2)
	{
		return (c1.getId() < c2.getId());
	}

	friend bool operator> (const Book& c1, const Book& c2)
	{
		return (c1.getId() > c2.getId());
	}

	friend bool operator == (const Book& c1, const Book& c2)
	{
		return (c1.getId() == c2.getId());
	}


	friend std::ostream& operator<<(std::ostream& os, const Book& dt)
	{
		std::string fullName = "";

		fullName.append(std::to_string(dt.getId()));
		fullName.append(": ");
		fullName.append(dt.getFirstName());
		fullName.append(" & ");
		fullName.append(dt.getFirstName());
		fullName.append("\n");

		os << fullName << std::endl;
		return os;
	}


};

int main()
{


	std::vector<Book> mylist;

	Book book(1, "Vincent", "Tene");
	mylist.push_back(book);

	Book book1(2, "Vincent", "Tene");
	mylist.push_back(book1);

	Book book2(3, "Vincent", "Tene");
	mylist.push_back(book2);

	Book book3(4, "Vincent", "Tene");
	mylist.push_back(book3);




	auto predicateMin = [](Book a, Book b) { return a.getId() < b.getId(); };

	auto minimum = *std::min_element(mylist.begin(), mylist.end());
	std::cout << "minimum of mylist: " << minimum << std::endl;


	auto maxElem = *std::max_element(mylist.begin(), mylist.end());
	std::cout << "minimum of mylist: " << maxElem << std::endl;


	std::vector<Book> other;
	other = mylist;

	//  std::cout << "minimum of mylist: " << std::max(mylist, predicateMin) << std::endl;


	std::cout << std::endl;

	std::string first{ "first" };
	std::string second{ "second" };

	auto minInt = std::min({ 3, 1, 2011, 2014, -5 });

	std::cout << "std::min(2011, 2014): " << std::min(2011, 2014) << std::endl;
	std::cout << "std::min(first, second): " << std::min(first, second) << std::endl;
	std::cout << "std::min({3, 1, 2011, 2014, -5}): " << std::min({ 3, 1, 2011, 2014, -5 }) << std::endl;
	std::cout << "std::min(-10, -5, [](int a, int b){return std::abs(a) < std::abs(b);}): " <<
		std::min(-10, -5, [](int a, int b) {return std::abs(a) < std::abs(b); }) << std::endl;


	std::cout << std::endl;

	std::cout << "std::max(2011, 2014): " << std::max(2011, 2014) << std::endl;
	std::cout << "std::max(first, second): " << std::max(first, second) << std::endl;
	std::cout << "std::max({3, 1, 2011, 2014, -5}): " << std::max({ 3, 1, 2011, 2014, -5 }) << std::endl;
	std::cout << "std::max(-10, -5, [](int a, int b){return std::abs(a) < std::abs(b);}): " <<
		std::max(-10, -5, [](int a, int b) {return std::abs(a) < std::abs(b); }) << std::endl;


	std::cout << std::endl;

	std::pair<int,int> pairInt = std::minmax(2011, 2014);
	auto pairStr = std::minmax(first, second);
	auto pairSeq = std::minmax({ 3, 1, 2011, 2014, -5 });
	auto pairAbs = std::minmax({ 3, 1, 2011, 2014, -5 }, [](int a, int b) {return (a) < (b); });

	std::cout << "(pairInt.first, pairInt.second): (" << pairInt.first << ", " << pairInt.second << ")" << std::endl;
	std::cout << "(pairStr.first, pairStr.second): (" << pairStr.first << ", " << pairStr.second << ")" << std::endl;
	std::cout << "(pairSeq.first, pairSeq.second): (" << pairSeq.first << ", " << pairSeq.second << ")" << std::endl;
	std::cout << "(pairAbs.first, pairAbs.second): (" << pairAbs.first << ", " << pairAbs.second << ")" << std::endl;

	std::cout << std::endl;
}
 