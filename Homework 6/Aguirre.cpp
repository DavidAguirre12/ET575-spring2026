#include<iostream>
using namespace std;    

int main(){
    int* ptr;
    int var =7;
    int foo = 21;
    ptr=&var;
    cout<<"Pointer 1 = "<<ptr<<endl;
    cout<<"Value 1 = "<<*ptr<<endl;
    ptr=&foo;
    cout<<"Pointer 2 = "<<ptr<<endl;
    cout<<"Value 2 = "<<*ptr<<endl;
    int&ref = var;
    cout<<"Ref = "<<&ref<<endl;
    return 0;
}