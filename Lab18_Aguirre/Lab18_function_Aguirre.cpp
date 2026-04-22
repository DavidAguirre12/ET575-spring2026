/*
David Aguirre 
April 20,2026
Lab18: Array application
*/

#include<iostream>
using namespace std;

//Example 1: search program
//function 1: function to collect up to 5 consecutive positive integers
//The collection will stop if a negative number is entered. 
//If there is less than five numbers collected; the function will reference to the array size
void fillarray(int *array, int &numberuserindex, int arraysize){
    int number, index = 0;
    do{
        cout<<"Enter a positive number: ";
        cin>>number;
        if(number>0){
            array[index] = number;
            index++;

        }
    }while(number>0 && index <arraysize);

    //update the index of the last consecutive positive number
    numberuserindex = index;
}

//Function 2; pirnt each element in an array
void printelement(int *array, int sizearray){
    for(int i =0; i<sizearray; i++){
        cout<<array[i]<<"\t";
    }
    cout<<endl;
}

//Function 3: search function
int search(int *array, int numberuserindex, int target){
    int index = 0;
    bool found = false;

    while(!found && index<numberuserindex){
        if(target == array[index])
            found = true;
        else
            index++;
    }

    if(found)
        return index;
    else
        return -1;
}


//EXERCISE
void collectnumber( int *array, int &numberuserindex, int arraysize){
    int number, index = 0;
    do{
        cout<<"Enter a number: ";
        cin>>number;
        if (number!=0){
            array[index] = number;
            index++;
        }
    }while(number !=0 && index <arraysize);
}

double averagenumber(int *array, int numberuserindex){
    double sum = 0;
    for(int l = 0; l < numberuserindex; l++){
        sum += array[l];
    }
    return (double)sum / numberuserindex;
}

int closestmean(int *array, int numberuserindex, double average){
    int closestnum = array[0];
    double minDiff = abs(array[0] - average);
    for(int i =1; i<numberuserindex; i++){
        double diff = abs(array[i] - average);
        if(diff< minDiff){
            minDiff = diff;
            closestnum = array[i];
        };
    }
    return closestnum;
}

void printresult(double averagenumber, int closest){
    cout<<"The closest number to average "<<averagenumber<<" is: "<<closest<<endl;
}