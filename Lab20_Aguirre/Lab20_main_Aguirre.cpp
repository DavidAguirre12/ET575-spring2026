/*
David Aguirre
April 27,2026
Lab 20 Parsing and file handling
*/

#include <iostream>
using namespace std;
#include "Lab20_function_Aguirre.cpp"

int main(){

    cout<<"----------Example 1: collec a number----------"<<endl;
    int n = collectnumber();
    cout<<"Collected number = "<<n<<endl;

    cout<<"----------Example 2: reading file----------"<<endl;
    readfile();

    cout<<"----------Example 3: writing file----------"<<endl;
    writefile("intro.txt");

    cout<<"----------Example 4: Append data----------"<<endl;
    appendmsg("sample.txt","David Aguirre");

    cout<<"----------Example 5: Check if a file exists----------"<<endl;
    checkfile("sample.txt");

    cout<<"----------Exercise----------"<<endl;
    createfile("data_user.txt");
    sendmsg("data_user.txt", "New message by David Aguirre!");
    readfile("data_user.txt");

    return 0;
}