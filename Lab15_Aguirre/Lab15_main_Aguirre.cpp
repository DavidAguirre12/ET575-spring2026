/*
David Aguirre
03/23/2026
Lab15
*/

#include <iostream>
#include "lab15_function_Aguirre.cpp"
using namespace std;

int main(){
    cout<<"----------Example 1; random number----------"<<endl;
    cout<<randomnumber()<<endl;
    
    cout<<"----------Example 2: Random number between 0 and 9----------"<<endl;
    cout<<random_0_9()<<endl;

    cout<<"----------Example 3: Random number between 5 and 12----------"<<endl;
    cout<<random_5_12()<<endl;

    cout<<"----------Example 4: Matching numbers ----------"<<endl;
    int roll1 = 1+rand()%6;
    int roll2 = 1+rand()%6;
    bool resultmatch = matchdices(roll1, roll2);
    printdices(roll1, roll2, resultmatch);

    cout<<"Exercise"<<endl;
    int roll3 = 1+rand()%6;
    int roll4 = 1+rand()%6;

    cout<<"Dice 1: "<<roll3<<endl;
    cout<<"Dice 2: "<<roll4<<endl;

    bool resultSnake = snakeeyes(roll3, roll4);
    printresultsnake(resultSnake)<<endl;
    return 0;
}