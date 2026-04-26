/*
David Aguirre
April 26, 2026
Homework 9
*/

#include <iostream>
using namespace std;

int arraysize(){
    int size;
    do{
        cout<<"Enter an array size between 1 and 100; ";
        cin>>size;
    }while(size<1 || size>100);
    return size;
}

void randPopulate(int noise[], int sizearray){
    for(int i=0; i<sizearray; i++){
        noise[i] = rand()%21+10;
    }
}

void print(int noise[],int sizearray){
    for (int i = 0; i < sizearray; i++){
        cout<<noise[i]<<"\t";
    }
    cout<<endl;
}

void reverse(int noise[], int sizearray){
    int temp;
    for(int i = 0; i < sizearray/2; i++){
        temp = noise[i];
        noise[i] = noise[sizearray-1-i];
        noise[sizearray-1-i] = temp;
    }
}