/*
Aguirre Duran David 
Jan 28, 2026
lab 3, numerical variable
*/

#include<iostream>

using namespace std;

int main(){
    cout<<"\n------- Example 1: -------"<<endl;
    //declare vairable
    int number = 10.9;
    float n = 7.8;

    cout<<"number = "<<number<<endl;
    cout<<"n = "<<n<<endl;
    
    cout<<"\n ------- Example 2: -------"<<endl;
    //numerical operator, + - = /
    //% returns the remainder of a division
    number = 5;
    int number2 = 2;
    cout<<"Sum = "<<number +n<<endl;
    cout<<"Division without casting = "<<number/number2 <<endl;
    //Cating convert from one data type into another data type
    cout<<"Division with casting = "<<number/static_cast<float>(number2) <<endl;

    //% modulus
    cout<<"mod of two numbers = "<<number%number2 <<endl;

    cout<<"\n ------- Example 3: -------"<<endl;
    //Assignment operators assign a value to a variable itself
    //++ increment by 1 
    cout<<"The original number = "<<number<<endl;
    number++;
    cout<<"Update number = "<<number<<endl;
    // -- decrement by 1
    cout<<"Original number = "<<number2<<endl;
    number2--;
    cout<<"Updated number = "<<number2<<endl;

    // +=
    number = 10;
    cout<<"Original number = "<<number<<endl;
    number += 5;
    cout<<"Updated value = "<<number<<endl;

    // -=
    number -= 8;
    cout<<"Update number with -=8 ---> "<<number<<endl;

    cout<<"\n ------- Example 4: -------"<<endl;
    // == compare if numbers are equal 
    // != compare if numbers are not equal
    // >  grater than
    // < kess than
    // >= greater than ir equal to
    // <= less than or equal to

    number = 3;
    number2 = 8;

    cout<<"Are numer and number 2 equal? "<<(number == number2)<<endl;
    
    bool check1 = number != number2;
    bool check2 = number > number2;

    //Print result
    cout<<"Are number and number 2 different? "<<check1<<endl;
    cout<<"Is number grater than number2? "<<check2<<endl;

    cout<<"\n ------- Example 5: -------"<<endl;
    // Determine the logic between values
    // && AND gate returns TRUE if all statements are TRUE
    // || OR gate reutrn TRUE if at least one of the statements is TRUE
    // ! NOT gate returns TRUE froma a FALSE and viceverse.

    number = 3;
    number2 = 5;

    bool check3 = number < number2; //Check3 = True(1)
    bool check4 = number >= number2; //Check4 = False(0)
    bool check5 = number2 != 10; //Check5 = True(1)
    bool check6 = number == 3; //Check6 = True(1)

    bool logicalcom = check3 && check5 && check6; // true && true && true = TRUE(1)
    bool logicalcom2 = check4 && check5 && check6; // false && true && true = FLASE(0)
    bool logicalcom3 = check4 || check5 || check6; // false || true || true =TRUE(1)
    bool logicalcom4 = !logicalcom;

    //Print result
    cout<<"Logical comparison 1 = "<<logicalcom<<endl;
    cout<<"Logical comparison 2 = "<<logicalcom2<<endl;
    cout<<"Logical comparison 3 = "<<logicalcom3<<endl;
    cout<<"Logical comparison 4 = "<<logicalcom4<<endl;
    
    return 0;
}