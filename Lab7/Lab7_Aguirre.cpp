/*
David Aguirre 
Feb 29th, 2026
Lab 7, nested conditionals stetements
*/

#include<iostream>

using namespace std;
int main(){
    cout<<"\n-----Example 1: Nested conditional-----"<<endl;
    //use nested conditional statement to check if a number is positive (even or odd), negative (even or odd) or zero
    int number = -8;
    if(number>0){
        if(number%2==0)
            cout<<number<<" is positive and even"<<endl;
        else 
            cout<<number<<" is positive and odd"<<endl;
    }
    else if(number<0){
        if(number%2==0)
            cout<<number<<" is negative and even"<<endl;
        else
            cout<<number<<" is negative and odd!"<<endl;
    }
    else{
        cout<<"The numer is zero"<<endl;
    }

    cout<<"\n-----Example 2: Nested conditional-----"<<endl;
    //print the sort three numbers from the highest to the lowest number
    //declare variables
    int num1, num2, num3;
    //collect values 
    cout<<"Ener three numbers: "<<endl;
    cin>>num1>>num2>>num3;
    //condinitonal statement
    if(num1>num2 && num1>num3){
        cout<<num1<<" Num1 is the highest number"<<endl;
        if(num2>num3)
            cout<<num1<<"\t"<<num2<<"\t"<<num3<<endl;
        else
            cout<<num1<<"\t"<<num3<<"\t"<<endl;
    }
    else if(num2>num1 && num2<num3){
        cout<<num2<<" Num2 is the hishest number"<<endl;
        if(num1>num3)
            cout<<num2<<"\t"<<num1<<"\t"<<num3<<endl;
        else
            cout<<num2<<"\t"<<num3<<"\t"<<num1<<endl;
    }
    else{
        cout<<num3<<" Num 3 is the highest number"<<endl;
        if(num1>num2)
            cout<<num3<<"\t"<<num1<<"\t"<<num2<<endl;
        else
            cout<<num3<<"\t"<<num2<<"\t"<<num1<<endl;
    }

    cout<<"\n-----Example 3: if-else operands-----"<<endl;
    //Use operands to check if a numer is even or odd
    /*
    if(numb%2==0)
        cout<<"even"<<endl;
    else 
        cout<<"odd"<<endl;
    */
   int x = 5;
   cout<<"The number is "<<(x%2==0 ? "Even" : "Odd")<<endl;




    cout<<"\n-----Exercises-----"<<endl;
    int budget;
    cout<<"Enter the price of your car budget: "<<endl;
    cin>>budget;
    if(budget>=00001 && budget<=10000){
        cout<<"Keep saving!"<<endl;
    }
    else if(budget>=10001 && budget<=30000){
        cout<<"You can afford an economy car"<<endl;
    }
    else if(budget>=30001 && budget<=70000){
        cout<<"You afford a standard car"<<endl;
        if
    }
    else if(budget>=70001 && budget<=150000){
        cout<<"You can afford a performance oriented car"<<endl;
        if(budget>=70001 && budget<=100000)
            cout<<"You can afford a Sport car"<<endl;
        else
            cout<<"You can afford a Supercar"<<endl;
    }
    else if(budget>150000){
        cout<<"You can afford a High-end luxury car"<<endl;
        cout<<"Would you like a Maserati or Rolls Royce?"<<endl;
    }
    else{
        cout<<"Invalid budget!"<<endl;
    }

    return 0;
}