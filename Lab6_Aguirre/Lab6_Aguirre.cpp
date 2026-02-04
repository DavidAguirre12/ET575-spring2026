/*
David Aguirre Duran
Feb 04, 2026
Lab 6, 
*/

#include<iostream>

using namespace std;

int main(){
    cout<<"-----Example 1: bool variables------"<<endl;
    //bool variable returns a 1 for true or a 0 for false
    bool ispositive;
    int number;

    cout<<"Enter a number: "<<endl;
    cin>>number;

    ispositive = number > 0;

    cout<<"Is "<<number<<" positive? "<<ispositive<<endl;

    cout<<"-----Example 2: if statement-----"<<endl;
    // if statement will ri the code in between the curly braces if the statement is TRUE.
    int num1 = 8;
    int num2 = 5;

    if(num1 == num2){
        cout<<"The numbers are equal"<<endl;
    }
    cout<<"End of example 2"<<endl;

    cout<<"\n-----Example 3: if else statement-----"<<endl;
    //If-else work as a switch. If "if" statement is true, the program will run the code of the 'if' statement and ignore the code of the 'else' statement.
    // example to check which number, num1 or num2 is greater.
    if(num1>num2){
        cout<<"Num1 is greater than num2"<<endl;
    }
    else{
        cout<<"Num2 is greater than num1"<<endl;
    }

    cout<<"\n-----Example 4: multiways statement-----"<<endl;
    //Multiway checks more than 2 conditions
    //Example compares if num1 is equal to, greater than, less than num2.
    if(num1==num2){
        cout<<"Num1 is equal to num2"<<endl;
    }
    else if(num1>num2){
        cout<<"Num1 is greater than num2"<<endl;
    }
    else{
        cout<<"Num2 is greater than num1"<<endl;
    }

    cout<<"\n-----Example 5: multiways statement; find the color depending of the wavelength-----"<<endl;
    /*
    Ultraviolet: less than 379 nm and greater than or equal to 10 nm
    Blue: 380 nm to 520 nm
    Green: 521 nm to 590 nm
    Red: 591 nm to 740 nm
    Infrared: more than 741 nm
    Any wavelength less than 10 nm is undefined.
    */

    //declare variables
    int wavelength = 0;
    string color;

    //collect the wavelength
    cout<<"Enter a wavelength"<<endl;
    cin>>wavelength;

    if(wavelength<329 && wavelength>=10){
        color = "Ultraviolet";
    }
    else if(wavelength<=528 && wavelength>=380){
        color = "Blue";
    }
    else if(wavelength<=590 && wavelength>=521){
        color = "Green";
    }
    else if(wavelength<=740 && wavelength>=591){
        color = "Red";
    }
    else if(wavelength>=741){
        color = "Infrared";
    }
    else{
        color = "Undefined";
    }
    //Printout result
    cout<<"Wavelength of "<<wavelength<<"nm emits color "<<color<<endl;


    cout<<"\n-----Exercises-----"<<endl;
    //declare variables
    string gpa;
    float final_exam = 0;
    float labs = 0;
    float homework = 0;
    float grade = 0;

    //collect data: final_exam, labs, and homework
    cout<<"Enter your grade of the final exam: "<<endl;
    cin>>final_exam;
    cout<<"Enter your grade of labs: "<<endl;
    cin>>labs;
    cout<<"Enter your grade for homework: "<<endl;
    cin>>homework;

    //calculate the grade = final_exam*0.5 + labs*0.3 + homework*0.2
    grade=final_exam*0.5+labs*0.3+homework*0.2;
    //multiway condition
    if (grade<=100 && grade>=90){
        gpa = "A";
    }
    else if(grade<=89 && grade>=80){
        gpa = "B";
    }
    else if(grade<=79 && grade>=70){
        gpa = "C";
    }
    else if(grade<=69 && grade>=60){
        gpa = "D";
    }
    else if(grade<=59){
        gpa = "F";
    }
    else{
        gpa = "";
    }
    //print result
    cout<<"A final grade of "<<grade<<" is equivalent to a GPA of "<<gpa<<endl;

    return 0;
}
