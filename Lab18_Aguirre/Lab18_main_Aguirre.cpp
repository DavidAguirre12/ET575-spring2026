/*
David Aguirre 
April 20,2026
Lab18: Array application
*/

#include <iostream>
#include "Lab18_function_Aguirre.cpp"

using namespace std;

int main(){
    cout<<"-----------Example 1: search function----------"<<endl;
    //declare the array size
    const int arraysize = 5;
    //declare the array
    int a[arraysize];
    //declare the variable to save the array size if there is less than five consecutive positive numbers
    int listsize;
    //declare the variable to save target
    int searchnumber = 20;

    //call function fillarray
    fillarray(a, listsize, arraysize);
    //testing listsize
    cout<<listsize<<endl;

    //call function 2
    printelement(a, listsize);

    //call function 3
    int foundindex = search(a, listsize, searchnumber);
    cout<<"Test search index "<<foundindex<<endl;


    //EXERCISE
    const int sizearray = 5;
    int b[sizearray];
    int sizelist;
    collectnumber(b,listsize,sizearray);
    return 0;
}