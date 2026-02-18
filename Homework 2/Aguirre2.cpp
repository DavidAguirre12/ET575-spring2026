/*
David Aguirre
*/

#include<iostream>
#include<string>

using namespace std;

int main(){

    cout<<"----------Program 1----------"<<endl;

    int age;
    cout<<"Enter your age: ";
    cin>>age;
    if(age>=0 && age<13){
        cout<<"Not elegible for any activity"<<endl;
    }
    else if(age>=13 && age<=17){
        cout<<"Elegible for youth activities"<<endl;
    }
    else if(age>=18 && age<=64){
        cout<<"Elegible for adult activites"<<endl;
    }
    else if(age>=65 && age<=119){
        cout<<"Elegible for senior activities"<<endl;
    }
    else{
        cout<<"Invalid age. Please enter a valid age."<<endl;
    }

    cout<<"----------Program 2----------"<<endl;

    int num1,num2;
    int sum;

    cout<<"Enter a number: "<<endl;
    cin>>num1;
    cout<<"Enter another number"<<endl;
    cin>>num2;
    sum = num1+num2;

    if(sum < 0 ){
        cout<<"False alarm! The sum is "<<sum<<endl;
    }
    else if(sum>=1 && sum<=100){
        if(sum%5 == 0){
            cout<<sum<<" is a pentagon."<<endl;
        }
        else if(sum %2 != 0){
            cout<<sum<<" is an odd guess"<<endl;
        }
    }
    else if(sum>=101 && sum<=200){
        cout<<"The new lucky numer is "<<sum<<endl;
    }
    else if(sum>=201 && sum<=999){
        cout<<sum<<" is a dreaming number."<<endl;
    }
    else if(sum>1000){
        if(sum%2 == 0){
            cout<<sum<<" approaches to the infinite evenly"<<endl;
        }
        else if(sum >= 2000){
            cout<<sum<<" approaches to the infinite and beyond!"<<endl;
        }
    }

    cout<<"----------Program 3----------"<<endl;
    
    char option;
    double temp;
    double result;
    cout<<"1.Celsius to Fahrenheit"<<endl;
    cout<<"2.Fahrenheit to Celsius"<<endl;
    cout<<"3.Kelvin to Celsius"<<endl;
    cout<<"4.Kelvin to Fahrenheit"<<endl;
    cout<<"5.Exit"<<endl;
    
    cout<<"Select an option from 1 to 5"<<endl;
    cin>>option;

    if(option == '5'){
        cout<<"You quit the program"<<endl;
        return 0;
    }

    cout<<"Enter the temperature to be converted"<<endl;
    cin>>temp;

    switch(option)
    {
    case '1':
        result=temp*(9.0/5.0)+32;
        cout<<temp<<" Celsius is equal to "<<result<<" Fahrenheit"<<endl;
        break;
    case '2':
        result=(temp-32)*(5.0/9.0);
        cout<<temp<<" Fahrenheit is equal to "<<result<<" Celsius"<<endl;
        break;
    case '3':
        result=temp-273.15;
        cout<<temp<<" Kelvin is equal to "<<result<<" Celsius"<<endl;
        break;
    case '4':
        result=(temp-273.15)*(9.0/5.0)+32;
        cout<<temp<<" Kelvin is equal to "<<result<<" Fahrenheit"<<endl;
        break;
    default:
        cout<<"Invalif option"<<endl;
    }

    return 0;
}