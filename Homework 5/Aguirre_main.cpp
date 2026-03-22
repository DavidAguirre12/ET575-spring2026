/*
David Aguirre
March 22, 2026
Homework 5
*/

#include <iostream>
#include "Aguirre_functions.cpp"

int main() {
    int s = speed();
    float temperature = temp();
    promptresult(windspeed(s, temperature));

    return 0;
}