/*
David Aguirre
March 22, 2026
Homework 5
*/

#include <iostream>
using namespace std;
#include<cmath>


int speed(){
    int s;
    do{
        cout<<"Enter the speed: ";
        cin>>s;
        if(s<0 || s>100){
            cout<<"Invalid speed. Speed has to be between 0 and 100"<<endl;
        }
    }
    while(s<0 || s>100);
    return s;
}

float temp(){
    float temperature;
    do{
        cout<<"Enter the temperature: ";
        cin>>temperature;
        if(temperature<= -90 || temperature>= 10){
            cout<<"Invalid temperature. Temperature has to be bewteen -90 and 10"<<endl;
        }    
    }
    while(temperature<= -90 || temperature>= 10);
    return temperature;

}

double windspeed(int speed, float temperature){
    double windspeed;

    windspeed = 33-(10*sqrt(speed)-speed+10.5)*(33-temperature);

    return windspeed;

}

void promptresult(double windspeed){
    cout<<"The wind index is: "<<windspeed<<endl;
}