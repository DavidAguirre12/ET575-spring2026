/*
David Aguirre
03/15/2026
*/

#include<iostream>
using namespace std;

int main(){

    int num;
    int positivecount = 0, negativecount = 0, zerocount = 0;
    for (int i = 1; i<=10; i++){
        cout<<"Enter a number: ";
        cin>>num;
        if(num<0){
            negativecount++;
        }
        else if(num==0){
            zerocount++;
        }
        else{
            positivecount++;
        }
    }
    cout<<"Total negative numbers entered: "<<negativecount<<endl;
    cout<<"Total zeros entered: "<<zerocount<<endl;
    cout<<"Total positive numbers entered: "<<positivecount<<endl;


    cout<<"----------Exercise 2----------"<<endl;
    int days;
    double sales, totalsales = 0, averagesales;

    cout<< "Enter the number of days: ";
    cin>>days;

    for(int i=1; i<=days; i++){
        cout<<"Enter sales for day "<<i<<" : ";
        cin>>sales;
        totalsales = totalsales + sales;
    }
    averagesales = totalsales / days;
    cout<<"Total sales $ "<<totalsales<<" for "<<days<<" days. Average dailt sales $ "<<averagesales<<endl;



    return 0;
}