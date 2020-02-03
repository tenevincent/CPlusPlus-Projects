// Chapter2.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <stdio.h>
#include  <iostream>

#include <iostream>
#include <string>


using namespace std;


using namespace std;

#include <iostream>
using namespace std;
char fun(char* p)
{
    char c = *p;
    (*p)++;
    return c;
}

class Zero
{
public: void out() { cout << 0; }
};
class One : public Zero
{
public: void out() { cout << 1; }
};
class Two : public Zero
{
public: void out() { cout << 2; }
};

using namespace std;
string fun(string s)
{
    return s.substr(0, 1) + s.substr(1, 1) + s.substr(1, 1) + s.substr(0, 1);
}

int var = -1;
int static Static(int i)
{
    static int y = 0;
    y += ++i;
    return y;
}
void fun(int* i)
{
    *i = *i >> *i - 1;
}

class Class {
public:
    static char value;
    Class() { value++; };
    ~Class() { value++; };
    //insert code here

    void set(char c = 'd') { value = c; }

    void print() { cout << value; }
};

char Class::value = 'a';



int main()
{

    Class a, * b;
    b = new Class();
    b->set('a');
    b->print();
    delete b;
    a.print();
    a.set('c');
    a.print();
    a.set();
    a.print();



    //int i = 2;
    //fun(&i);
    //cout << i;


    //string s1[] = { "A","Z" };
    //string s = "";

    //for (int i = 0; i < 2; i++)
    //    cout << s.append(s1[i]).insert(1, "_");


    //string* s = new string("ab");
    //cout << fun(*s)    << std::endl;
    //cout << fun("ab");
    //Zero* obj;
    //One obj1;
    //obj = &obj1;
    //obj->out();
    //Two obj2;
    //obj = &obj2;
    //obj->out();


    //string s;
    //s = "abcd";
    //s.append(s);
    //s.resize(s.size() / 2);
    //cout << s;


    //char array[3] = { 'a', 'b', 'c' };
    //fun(array + 1);
    //cout << fun(array + 1);
    return 0;
}



//
//class A {
//public:
//    float v;
//    A() { v = 1.0; }
//    A(A& a) { A::v = a.v; cout << "1"; }
//    ~A() { cout << "0"; }
//    float set(float v) {
//        A::v = v;
//        return v;
//    }
//    float get(float v) {
//        return A::v;
//    }
//};
//
//int main() {
//    A a, * b = new A(a), * c = new A(*b);
//    c->get(b->get(a.set(1.0)));
//    delete b;
//    delete c;
//    return 0;
//}


//
//int fun(int p1 = 1, int p2 = 1) {
//    return p2 << p1;
//}
//
//int main() {
//
//    float f = 123.456;
//    float g = 1e100;
//    int i = f;
//    int j = g;
//
//    cout << i << endl;
//    cout << j << endl;
//
//
//    float f = 3.21;
//    double d = 1.23;
//    int k = int(f) + (int)d;
//    cout << k << endl;
//
//
//    cout << fun() << endl;
//    cout << fun(2) << endl;
//
//    cout << fun(fun(), fun(2));
//    return 0;
//}
//
//


//int f1(int* a) {
//    return *a + 1;
//}
//
//int* f2(int* a) {
//    return a + 1;
//}
//
//int* f3(int& a) {
//    return &a + 1;
//}
//
//int main() {
//    int t[] = { 0, 1, 2, 3 };
//    cout << f1(f3(*f2(t)));
//    return 0;
//}


//
//int main(void)
//{
//
//    int value = 2;
//    cout << f1(value);
//    cout << f2(value);
//    cout << f3(&value);
//
//
//    /*float f[2];
//    float* p1 = f, * p2 = p1 + 1;
//    cout << (p2 - p1) / sizeof(float);*/
//
//   // int value, square;
//   // //value = new int;
//
//   // printf("Give me a number and I will square it!\n");
//   // scanf_s("%d", &value);
//   // square = value * value;
//   // printf("You've given %d\n", value);
//   // printf("The squared value is %d\n", square);
//
//   // int i;
//   // i = 100;
//   // i += (i > 0) + (i < 1000) + (i >= 100) + (i <= 100);
//   // printf("The squared value is %d\n", i);
//   // //delete value;
//
//   // int var;
//   // var = 2;
//   // var = var * var;
//   // var = var + var;
//   // /*
//   //var = var / var;
//   //var = var – var;
//   //  */
//
//
//   // {
//   //     int i, j, k;
//
//   //     i = 3;
//   //     j = -3;
//   //     k = i * j;
//   //     k += j;
//   //     k /= i;
//   //     char c;
//   //     c = 'a';
//   //     c -= ' ';
//   //     printf("The squared value is %c\n", ' ');
//   // }
//
//
//    return 0;
//}
