/*
David Aguirre
April 26, 2026
Homework 9
*/

#include <iostream>
using namespace std;
#include <time.h>
#include "Hw_function_Aguirre.cpp"

int main()
{
    srand(time(0));

    int sizearray = arraysize();

    int noise[sizearray];
    randPopulate(noise, sizearray);
    cout << "Original Set:" << endl;
    print(noise, sizearray);
    reverse(noise, sizearray);
    cout << endl << "Reversed Set:" << endl;
    print(noise, sizearray);

    return 0;
}