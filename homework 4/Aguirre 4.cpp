/*
David Aguirre 
Homework 4:Loops
*/

#include<iostream>

using namespace std;

int main(){
    int num;
    do{
        cout<<"Enter a number: ";
        cin>>num;
        if(num<10){
            cout<<num<<" is invalid!. ";
            cout<<"Please enter a number greater than 10: ";
        }
    }while(num<10);
    cout<<num<<" is a valid number!"<<endl;

    cout<<"----------Exercise 2-----------"<<endl;

    int num1,num2;
    int min, max;
    cout<<"Enter your first number: ";
    cin>>num1;
    cout<<"Enter a second number: ";
    cin>>num2;
    if(num1<num2){
        min = num1;
        max = num2;
    } 
    else{
        min = num2;
        max = num1;
    }

    cout<<"Numbers from "<<min<<" to "<<max<<" are "<<endl;
    
    while(min<=max){
        cout<<min<<" ";
        min++;
    
    }
    cout<<endl;

    cout<<"----------Exercise 3----------"<<endl;
    const int GRID = 11;
    for(int row=1; row<=GRID; row++){
        for(int col=1; col<=GRID; col++){
            if((col>=4 && col<=5 && row>=3 && row<=10) || (row>=4 && row<=5 && col>=6 && col<=8))
                cout<<" # ";
            else
                cout<<" . ";
            }
        cout<<endl;
        }
    

return 0;
}