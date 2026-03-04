/*
David Aguirre 
March 2, 2026
Lab 10, loop mechanims
*/

#include<iostream>

using namespace std;

int main(){

    cout<<"---------Example 1: for loop basics---------"<<endl;

    for(int action=0; action<5; action++ ){
        cout<<"Hello "<<action<<endl;
    }

    /*loop ananlysis table
    loop interation  |  action  | action<5  |  cout<<"Hello "<<action<<  |  action++  
    -----------------------------------------------------------------------------------------------------
        1            |  0       | true      |  Hello 0                   |  action = 0+1 = 1
        2            |  1       | true      |  Hello 1                   |  action = 1+1 = 2
        3            |  2       | true      |  Hello 2                   |  action = 2+1 = 3
        4            |  3       | true      |  Hello 3                   |  action = 3+1 = 4
        5            |  4       | true      |  Hello 4                   |  action = 4+1 = 5
        6            |  5       | false (stop the loop)
    */

    cout<<"---------Example 2: for loop as a increment counter---------"<<endl;
    // coubter from 1 to 10 (inclusive) with step of 1 -->1,2,3,4,5,6,7,8,9,10
    int x = 1;
    for( x ; x <= 10; x++){
        cout<<x<<" \t ";
    }
    cout<<endl;

    cout<<"---------Example 3: for loop as a decrement counter---------"<<endl;
    // counter from 2 to -5 (inclusive) with a step of 1 --->2,1,0,-1,-2,-3,-4,-5
    for(int n = 2; n >= -5; n--){
        cout<<n<<" \t ";
    }
    cout<<endl;

    cout<<"---------Example 4: for loop as in increment counter with different steps---------"<<endl;
    //counter from 1 to 20 (exclusive) in a step of 3  -->1,3,7,10,13,16,19
    for(int m = 1; m <20; m+=3){
        cout<<m<<" \t ";
    }
    cout<<endl;

    cout<<"---------Example 5: nested conditional statement within the loop---------"<<endl;
    //counter from -10 to 10, step of 3, count how many numbers are multiped of 5 within the counter.
    int counter_5=0;
    for(int x = -10; x<=10; x+=3){
        cout<<x<<" \t ";
        if(x%5==0 && x!=0){
            counter_5 ++;
        }
    }
    cout<<endl;
    cout<<"There is/are "<<counter_5<<" number/s multiplied of 5"<<endl;

    cout<<"---------Exercise 1---------"<<endl;
    int counter_2=0;
    for(int x = 21; x>=-21; x-=5){
        cout<<x<<" \t ";
        if(x%2==0 && x!=0){
            counter_2 ++;
        }
    }
    cout<<endl;
    cout<<"There is/are "<<counter_2<<" number/s multiplied of 5"<<endl;

    cout<<"---------Exercise 2---------"<<endl;
    int usernumber;
    cout<<"Enter an inital number: ";
    cin>>usernumber;

    for(usernumber; usernumber<31; usernumber+=4){
        cout<<usernumber<<" \t ";
    }

    return 0;

}