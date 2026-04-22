/*
David Aguirre
April 22, 2026
lab 19 2D Arrays
*/

const int row = 3;
const int col = 4;
#include <iostream>
using namespace std;

//Example 1: Function to print elements in a 2D array
void print2d(int arr[][COLSIZE], int rowsize){
    for(int row = 0; row<rowsize; row++){
        for(int col = 0; col<COLSIZE; col++){
            cout<<arr[row][col]<<"\t";
        }
        cout<<endl;
    }
}

//Example 2: funtion to sum all even positive numbers in a 2D array
int sumevenpositive(int arr[][5], int rowsize){
    int sumallevenpositive = 0;
    for(int row=0;row<rowsize; row++){
        for(int col=0; col<COLSIZE; col++){
            if(arr[row][col]>0 && arr[row][col]%2==0)
                sumallevenpositive += arr[row][col];
        }
        cout<<endl;
    }
    return sumallevenpositive;
}

void printsum(int sumevenpositive){
    cout<<"The result is "<<sumevenpositive<<endl;
}

//Exercise
void populate(int arr[row][col]){
    for(int i = 0; i<row; i++){
        for (int j = 0; i<col; j++){
            arr[i][j]=rand()%101;
        }
    }
}

void printvaluearray(int arr[row][col]){
    for(int i = 0; i<row; i++){
        for (int j = 0; i<col; j++){
            cout<<arr[i][j];
        }
        cout<<endl;
    }
}

double average(int arr[row][col]){
    double sum = 0;
    for(int i = 0; i<row; i++){
        for (int j = 0; i<col; j++){
            sum += arr[i][j];
        }
    }
    return sum/(row*col);
}