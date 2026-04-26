/*
David Aguirre
April 26, 2026
Homework 8
*/

#include <iostream>

void searchvalue(int arr[ROWCOL_ARRAY][ROWCOL_ARRAY], int value, int location[2]){
    for(int row=0; row<ROWCOL_ARRAY; row++){
        for(int col=0; col<ROWCOL_ARRAY; col++){
            if(arr[row][col] ==value){
                location[0] = row;
                location[1] = col;
                return;
            }
        }
    }
    location[0] = -1;
    location[1] = -1;
}

void displayMessage(int value, int location[2]){
    if(location[0] == -1){
        cout<<"Number "<<value<<" was not found in the array."<<endl;
    } 
    else{
        cout<<"Number "<<value<<" was found in row "<<location[0]<<" and column "<<location[1]<<"."<<endl;
    }
}