/*
Homework 1: strings, string methods, and numerical variables.
David Aguirre Duran 
*/

#include<iostream>
#include<string>

using namespace std;

int main(){
    cout<<"ACTIVITY 1"<<endl;
    string welcome = "Welcome to ";
    string york = "New York City ";
    string name;
    cout<<"Enter your name: ";
    cin>>name;
    string message = welcome + york + name;

    int messagelength = message.length();
    int index = message.find("ma");
    string newmessage = message;
    if(index != string::npos){
    newmessage.replace(index, 2, "%---%");
    }

    cout<<"\nConcatenated message:\t"<<message<<endl;
    cout<<"Message length:\t\t"<<messagelength<<endl;
    cout<<"Index of character 'ma' :\t\t"<<index<<endl;
    cout<<"Replace 'ma' with %---%: "<<newmessage<<endl;


    cout<<"-------Activity 2-------"<<endl;;
    float pi = 3.14159;
    float radius;
    float height;

    cout<<"Enter the radius: ";
    cin>>radius;
    cout<<"Enter the height: ";
    cin>>height;

    bool check = radius>height;
    bool check2 = radius==height;
    
    height *= 3;
    radius += 5;
    
    bool logical = (radius!=height) && (radius>height);
    float volume = pi * (radius * radius) * height;

    cout<<"Is the radius greater than height? "<<check<<endl;
    cout<<"Is the radius equal to height? "<<check2<<endl;
    cout<<"Triple height = "<<height<<endl;
    cout<<"Increased radius by 5 = "<<radius<<endl;
    cout<<"Is the radius not equal to and greater than height? "<<logical<<endl;
    cout<<"The volume of a right cylinder with radius "<<radius<<" cm and height "<<height<<" cm is = "<<volume<<" cm^3"<<endl;

    return 0;
}