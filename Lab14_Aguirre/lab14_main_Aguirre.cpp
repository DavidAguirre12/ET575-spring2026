/*
David Aguirre
Lab14, functions
March 18, 2026
*/

#include <iostream>
using namespace std;
#include "lab14_function_Aguirre.cpp"

int main(){

    cout<<"----------Example 1: function calling function----------"<<endl;
    int calculate = calculatedb(2,3);
    cout<<calculate<<endl;
    
    cout<<"-----------Example 2: inclusive function-----------"<<endl;
    cheers(4);

    cout<<"----------Example 3: linear recursive -----------"<<endl;
    int n = linearfunction(3);
    cout<<"The Final result is: "<<n<<endl;

    cout<<"----------Example 4: Built-in function----------"<<endl;
    int side1 = collectnumber();
    int side2 = collectnumber();
    float h = hypotenuse(side1,side2);
    printresult(side1, side2, h);

    cout<<"----------Exercise -----------"<<endl;
    cout<<"Enter the coordinates of the first point: "<<endl;
    double x1 = enternumber();
    double y1 = enternumber();
    cout<<"Enter the coordinates of the second point: "<<endl;
    double x2 = enternumber();
    double y2 = enternumber();

    double d = distance(x1,y1,x2,y2);
    distanceresult(x1,y1,x2,y2,d);
    
    return 0;
}