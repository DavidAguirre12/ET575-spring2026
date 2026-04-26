/*
David Aguirre
April 22, 2026
lab 19 2D Arrays
*/

const int COLSIZE = 5;
#include <iostream>
#include<time.h>
#include "Lab19_function_Aguirre.cpp"

using namespace std;

int main(){
    cout<<"----------Example 1: 2D array----------"<<endl;
    //Initialize a 2D array
    int rowsize = 3;
    int a[rowsize][COLSIZE] ={
        {4,8,-12},
        {1,-8,3,5,7},
        {-6,2,9}
    };

    //Call the print function
    print2d(a,rowsize);

    cout<<"----------Example 2: sum of all positive even numbers----------"<<endl;
    printsum(sumevenpositive(a,rowsize));

    cout<<"----------Exercise----------"<<endl;
    srand(time(0));
    int numbers[row][col];
    char choice;

    do{
        populate(numbers);
        printvaluearray(numbers);
        cout<<fixed<<endl;
        cout<<"Average: "<<average(numbers)<<endl;
        cout<<"Another run? (y/n): ";
        cin>>choice;
    }while(choice == 'y' || choice == 'Y');
}