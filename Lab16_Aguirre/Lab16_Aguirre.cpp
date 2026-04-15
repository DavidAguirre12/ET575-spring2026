/*
David Aguirre 
01/15/2026
Lab 16 Arrays
*/

#include <iostream>

#include"Lab16_function_aguirre.cpp"

using namespace std;

int main(){
    cout<<"----------Example 1: pointer and reference "<<endl;
    pointerreference();
    
    cout<<"----------Exmaple 2: passing pointer and reference to a function "<<endl;
    string something = "Hello world!";
    pintvalue(something);
    printaddress(&something);
    printreference(something);

    cout<<"----------Example 3: intro to array----------"<<endl;
    introarray();

    cout<<"----------Example 4: length of an array----------"<<endl;
    lenghtarray();

    cout<<"----------Example 5: loop through an array----------"<<endl;
    looparray();

    cout<<"----------Example 6; pass an array to a function----------"<<endl;
    //declare an array
    const int s = 5;
    int numbers[s];

    //fill up the array with data
    fillup(s,numbers);

    //print the values in an array
    printarray(s,numbers);

    //Print the max value
    int m = maxnumber(s,numbers);
    cout<<"The maximum number is "<<m<<endl;

    return 0;
}