// Chapter2.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <stdio.h>

int main(void)
{
    int value, square;
    //value = new int;

    printf("Give me a number and I will square it!\n");
    scanf_s("%d", &value);
    square = value * value;
    printf("You've given %d\n", value);
    printf("The squared value is %d\n", square);

    int i;
    i = 100;
    i += (i > 0) + (i < 1000) + (i >= 100) + (i <= 100);
    printf("The squared value is %d\n", i);
    //delete value;

    int var;
    var = 2;
    var = var * var;
    var = var + var;
    /*
   var = var / var;
   var = var – var;
     */


    {
        int i, j, k;

        i = 3;
        j = -3;
        k = i * j;
        k += j;
        k /= i;
        char c;
        c = 'a';
        c -= ' ';
        printf("The squared value is %c\n", ' ');
    }


    return 0;
}
