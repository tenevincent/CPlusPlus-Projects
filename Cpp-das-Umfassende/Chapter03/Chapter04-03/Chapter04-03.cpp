// Chapter04-03.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>

struct Data { Data(int v) : value{ v } {} int value; }; //#


int main() { //#
    Data const* data = new Data(5);
#if 0 //#
    data->value = 7;         // dieses const sch?tzt Data
#endif //#
    data = new Data(6);      // Zeiger neu zuweisen ist okay
    Data* const mehr = new Data(8);
    mehr->value = 9;         // jetzt okay
#if 0 //#
    mehr = new Data(10);     // Referenz ist gesch?tzt
#endif //#
    (void)data; (void)mehr; //#
} //#


