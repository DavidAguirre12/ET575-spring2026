/*
David Aguirre
April 26, 2026
Homework 8
*/

#include <iostream>
const int ROWCOL_ARRAY = 5;
using namespace std;
#include "Hw_function_Aguirre.cpp"

int main(){

    int arr[ROWCOL_ARRAY][ROWCOL_ARRAY] = {
        {1,2,3,4},
        {5,6,7,8},
        {9,10,11,12},
        {13,14,15,16}
    };
    
    int value;
    int location[2];
    cout<<"Enter a number to search for: ";
    cin>>value;
    searchvalue(arr, value, location);
    displayMessage(value, location);

    return 0;
}