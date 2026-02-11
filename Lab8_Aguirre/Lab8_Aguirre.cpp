/*
David Aguirre Duran
Feb 11, 2026
Lab 8, 
*/

#include<iostream>

using namespace std;

int main(){
    cout<<"\n----- Example 1: Switch-case-----"<<endl;
    //Use switch-case statemnt to ask the user to select a dayoff
    //Declare vairables
    int day;
    string dayoff = " ";
    //Promp message
    cout<<"Select a day off: "<<endl;
    cout<<"1 for Monday"<<endl;
    cout<<"2 for Tuesday"<<endl;
    cout<<"3 for Wednesday"<<endl;
    cout<<"4 for Thursday"<<endl;
    cout<<"5 for Friday"<<endl;
    //Collect the day off
    cin>>day;

    //siwtch-case statement
    switch(day)
    {
    case 1:
        dayoff = "Monday";
        break;
    case 2:
        dayoff = "Tuesday";
        break;
    case 3:
        dayoff = "Wednesday";
        break;
    case 4:
        dayoff = "Thursday";
        break;
    case 5:
        dayoff = "Friday";
        break;
    default:
        dayoff = "Invalid";
        break;
    }

    //promp result
    cout<<"Your day off is "<<dayoff<<endl; 
    
    cout<<"\n----- Example 2: Switch-case-----"<<endl;
    //use switch-case statement to pick a gender
    //declare variables
    char gender;
    //prompt message
    cout<<"Select a gender: "<<endl;
    cout<<"f for female"<<endl;
    cout<<"m for male"<<endl;
    cout<<"o for other"<<endl;
    //collect gender 
    cin>>gender;
    
    //switch-case statement
    switch(gender)
    {
    case 'f': 
    case 'F':
        cout<<"Gender = Female"<<endl;
        break;
    case 'm' : case 'M':
        cout<<"Gender = Male"<<endl;
        break;    
    case 'o' : case 'O':
        cout<<"Gender = Other"<<endl;
        break;
    default:
        cout<<"Gender = Undefined"<<endl;
        break;
    }

    cout<<"\n----- Exercise-----"<<endl;

    int num1;
    int num2;
    char operation;

    cout<<"Pick a number: "<<endl;
    cin>>num1;
    cout<<"Pick another number: "<<endl;
    cin>>num2;
    cout<<"Choose an operation (+,-,*,/,%,q to quit): ";
    cin>>operation;

    switch(operation)
    {
    case '+':
        cout<<"Result: "<<num1<<operation<<num2<<" = "<<num1+num2<<endl;
        break;
    case '-':
        cout<<"Result: "<<num1<<operation<<num2<<" = "<<num1-num2<<endl;
        break;
    case '*':
        cout<<"Result: "<<num1<<operation<<num2<<" = "<<num1*num2<<endl;
        break;
    case '/':
        cout<<"Result: "<<num1<<operation<<num2<<" = "<<num1/num2<<endl;
        break;
    case '%':
        cout<<"Result: "<<num1<<operation<<num2<<" = "<<num1%num2<<endl;
        break;
    case 'q':
        cout<<"You quit the program"<<endl;
        break;
    default:
        cout<<"You entered a number or an operand wrong"<<endl;
        break;
    }

    return 0;
}