#include "Section01.h"
#include <iostream>
using namespace std;

void  Section01::ShowCppFeatures() {

}



 
bool operator== (const Section01& c1, const Section01& c2)
{
    return (c1.xdata == c2.xdata &&
        c1.xdata == c2.xdata);
}