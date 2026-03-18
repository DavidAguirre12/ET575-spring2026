/*
David Aguirre
03/16/2026
Lab 13, Introduction to functions
*/

#include <iostream>
using namespace std;

//Example 1: void function, void functions are functions that don't return any value
void printHello(){
    cout<<"Hello World"<<endl;
    return; //The return line is optional for a void function
}

//Example 2: function that passes values
void greeting(string username){
    cout<<"Welcome to functions "<<username<<endl;
}

//Example 3: function that passes and returns a value
//Function that passes a number and return the triple of the number
int triplenumber(int number){
    return number*3;
}

//Example 4: function to check if a number is positive, negative, or zero.
//this function returns a string
string checknumber(int number){
    if(number>0){
        return "positive";
    }
    else if(number<0){
        return "Negative";
    }
    else{
        return "Zero";
    }
}

//Example 5: composition function
//Function to validate that a number is postive
//function only returns a positive number

int validatepositive(){
    int n;
    cout<<"Enter a number: ";
    cin>>n;

    //recollect the number if the number is not positive
    while(n<=0){
        cout<<"Enter a positive number: ";
        cin>>n;
    }

    return n;
}

//function 2: function to claculate and return the area of a rectangle
int arearectangle(int lenght, int width){
    return lenght*width;
}

//function 3: print the result
void printarea(int lenght, int width, int area){
    cout<<"The area of a rectanlge with "<<lenght<<" and "<<width<<" is "<<area<<endl;
}

bool evennumber(int num){
    if(num%2==0){
        return true;
    }
    else{
        return false;
    }
}

void printresult(int num, bool result){
    cout<<"Is "<<num<<" even? "<<result<<endl;
}
