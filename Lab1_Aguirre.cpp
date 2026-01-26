/*
David Aguirre Duran
Jan 26, 2026
Lab 1, iostream
*/

//header library
#include<iostream>

using namespace std;

//main functioin is the executable part of your c++ file
int main(){
    cout<<"\nExample 1; output stream, cout "<<endl<<endl;
    cout<<"\tWelcome to C++ "<<endl;

    cout<<"Example 2: declaring varaiables"<<endl;
    //decalring variables 
    int number;
    string username;
    char symbol;

    // assign value to a variable
    username = "peterpan123"; 
    symbol = '%';
    number = 9;

    //print values in a variable
    cout<<"Given username = "<<username<<endl;
    cout<<"Given number = "<<number<<endl;
    cout<<"Givewn symbol = "<<symbol<<endl;

    cout<<"\nExample 3: console in, cin"<<endl;
    //declare variables
    float n= 3.5;
    string lastname;

    //collect last name from the user (Terminal)
    cout<<"Enter your last name: ";
    cin>>lastname;

    //print results
    cout<<"Welcome to C++ "<<lastname<<" Your rate is "<<n<<endl;
    return 0;
}