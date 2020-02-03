// Chapter7.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <exception>
#include <stdexcept>
using namespace std;


using namespace std;
 

class E {};

class X {
    static int c;
public:
    X() { if (c++ > 2) throw new E; }
    ~X() { if (c++ > 2) throw new E; }
};

int X::c = 0;

void f(int i) {
    X a, b;
    cout << i;
}

int main(void) {
    try {
        f(0);
        f(1);
    }
    catch (...) {
        cout << 1;
    }
    return 0;
}



//void function(int i) {
//	switch (i) {
//	case 0: throw domain_error("0");
//	case 1: throw logic_error("1");
//	case 2: throw exception();
//	case 3: throw range_error("2");
//	case 4: throw "so bad";
//	}
//}
//int main(void) {
//
//	try {
//
//	}catch(...)
//	{ 
//	
//	}
//
//
//	for (int i = 0; i < 5; i++) {
//		try {
//			function(i);
//		}
//		catch (logic_error & le) {
//			cout << "Logic error: " << le.what() << endl;
//		}
//		catch (exception & ex) {
//			cout << "Exception: " << ex.what() << endl;
//		}
//		catch (...) {
//			cout << "Something bad happened" << endl;
//		}
//	}
//	return 0;
//}
