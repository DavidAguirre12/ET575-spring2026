/*
David Aguirre
03/16/2026
Lab 13, Introduction to functions
*/

#include <iostream>

using namespace std;

#include "Lab13_function_Aguirre.cpp"

int main(){

    cout<<"----------Example 1: void function-----------"<<endl;
    printHello();
    printHello();

    cout<<"----------Example 2: passes values-----------"<<endl;
    greeting("Peter");
    greeting("Annie");

    cout<<"----------Example 3: triple a number-----------"<<endl;
    int n = triplenumber(3);
    cout<<n<<endl;
    cout<<triplenumber(5)<<endl;

    cout<<"----------Example 4: check a number----------"<<endl;
    cout<<checknumber(-10)<<endl;
    cout<<checknumber(0)<<endl;
    cout<<checknumber(5)<<endl;

    cout<<"----------Example 5: FUnction composition-----------"<<endl;
    //int area_rec = arearectangle(validatepositive(), validatepositive())
    int lenght = validatepositive();
    int width = validatepositive();

    int area_rec = arearectangle(lenght,width);
    printarea(lenght, width, area_rec);


    cout<<"----------Exercises----------"<<endl;

    int number;
    
    cout<<"Enter a number: ";
    cin>>number;

    bool check = evennumber(number);
    printresult(number, check);
    
    return 0;
}