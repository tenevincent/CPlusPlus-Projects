// CPA_Certification_Preparation.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iomanip>
#include <iostream>
#include <string>
using namespace std;



void fun(int);
int main()
{
    int byte = 255;
    cout << std::oct << byte << std::endl;



    int a = 0;
    fun(a);
    return 0;
}
void fun(int n)

{
    if (n < 2)
    {
        fun(++n);
        cout << n;
    }
}








//int fun(int x);
//int main() {
//    cout << fun(10);
//    return 0;
//
//}
//int fun(int x) {
//    if (x > 0)
//        return fun(x - 1);
//    else
//        return 100;
//}


 
//class First
//{
//    string* s;
//public:
//    First() { s = new string("Text"); }
//    ~First() { delete s; }
//    void Print() { cout << *s; }
//};
//int main()
//{
//    First FirstObject;
//
//    FirstObject.Print();
//    FirstObject.~First();
//}


 
//int main(int argc, const char* argv[])
//{
//	int x, y;
//	union t
//	{
//		char tab[2];
//		int i;
//	};
//	union t u;
//	u.tab[0] = 1;
//	u.tab[1] = 2;
//	u.i = 5;
//	x = u.tab[0];
//	y = u.tab[1];
//
//
//	cout << x << "," << y << "," << u.i;
//	return 0;
//}




// DEMO 02
//class complex {
//	double re, im;
//public:
//	complex() : re(1), im(0.4) {}
//	 complex   operator - (complex& t);
//	void Print() { cout << re << " " << im; }
//};
// complex complex::operator- (complex& t) {
//	complex temp;
//	temp.re = this-> re - t.re;
//	temp.im = this-> im - t.im;
//	return temp;
//}
//int main() {
//	complex c1, c2, c3;
//	c3 = c1- c2;
//	c3.Print();
//}





// DEMO 01
//using namespace std;
//int s(int n);
//int main()
//{
//	int a;
//	a = 3;
//	cout << s(a);
//	return 0;
//
//}
//int s(int n)
//{
//	if (n == 0) return 1;
//	return s(n - 1) * n;
//}





// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
