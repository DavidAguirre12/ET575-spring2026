/*
David Aguirre
Lab 11, while loop
March 9, 2026
*/

#include<iostream>

using namespace std;

int main(){
    cout<<"\n ----------Example 1: while loop as a counter----------"<<endl;
    //while loop to print from 1 to 5, step of 1   -->1,2,3,4,5
    //step 1) initial value for the loop
    int i = 1;
    //step 2) loop condition i<=5
    while(i<=5){
        cout<<i<<"\t";
        //step 3)update loop value
        i++;
    }

    cout<<"\n ----------Example 2: while loop as a counter----------"<<endl;
    //[rint from 3 to 0, step of -1  -->3,2,1,,0
    int m = 3;
    while(m>=0){
        cout<<m<<"\t";
        m--;
    }

    cout<<"\n ----------Example 3: while loop as a counter----------"<<endl;
    //[rint from 3 to 0, step of -1  -->3,2,1,,0
    m = 3;
    while(m-- >= 0){
        cout<<m<<"\t";
    }

    cout<<"\n ----------Example 4: while loop as a counter----------"<<endl;
    //[rint from 3 to 0, step of -1  -->3,2,1,,0
    m = 3;
    while(--m>=0){
        cout<<m<<"\t";
    }

    cout<<"\n ----------Example 5: while loop to validate an input----------"<<endl;
    //while loop to validate if a number is not between 10 and 20
    int n;
    cout<<"Enter a number: ";
    cin>>n;

    //while loop to recollect the number again
    while(!(n>=10 && n<=20)){
        cout<<"Enter a number between 10 and 20: ";
        cin>>n;
    }

    //print result
    cout<<"Entered number = "<<n<<endl;

    cout<<"\n ----------Example 6: do-while loop----------"<<endl;
    //check if a number is even or odd
    //use loop to check if the user want to check another number
    char choice = 'y';
    do{
        cout<<"Enter another number: ";
        cin>>n;
        if(n%2==0){
            cout<<n<<" is EVEN!"<<endl;
        }
        else{
            cout<<n<<" is ODD!"<<endl;
        }
        cout<<"Do you want another run? ";
        cin>>choice;
    }while(choice == 'y' || choice == 'Y');

    cout<<"\n ----------Example 7: do-while loop to validate an input----------"<<endl;
    int number;
    do{
        cout<<"Enter a positive number: ";
        cin>>number;
    }while(number<=0);

    cout<<"\n ----------Example 8: while loop as a counter----------"<<endl;
    //run a program to collect and add four consecutive negative numbers. The program will stop if a positive number or a zero is entered.
    int loopcounter = 1;
    int sumnegative = 0;
    int num;

    do{
        cout<<"Enter a negative number; ";
        cin>>num;
        if(num<0){
            sumnegative += num;
            loopcounter++;
        }
        else{
            cout<<"A non-negative number was entered! Loop will be terminated"<<endl;
            break;
        }
    }while(loopcounter<=4);

    //print result
    cout<<"The toal sum is = "<<sumnegative<<endl;

    cout<<"\n ----------Example 9: break statement----------"<<endl;
    //withdraw from an account. Original balance $1000
    //if the amount is greater than the balance or negative, the program will recollect another amount
    int balance = 1000;
    int w = 0;
    int c = 1;
    while(true){
        cout<<"How much do you want to withdraw? ";
        cin>>w;
        if(w<0 ||w>balance){
            cout<<"Can not withdraw $"<<w<<". Enter another amount or press 0 to exit: ";
            cin>>w;
            if(w==0){
                break;
            }
        }
        else{
            balance -= w;
            break;
        }
    }
    //print result
    cout<<"The balance is $"<<balance<<endl;

    cout<<"\n ----------Lab Excercise 1----------"<<endl;
    int usernum;
    int sum = 0;
    while(usernum!=0){
        cout<<"Enter a number: ";
        cin>>usernum;
        sum += usernum;
    }
    cout<<"The total sum is= "<<sum<<endl;

    return 0;
}