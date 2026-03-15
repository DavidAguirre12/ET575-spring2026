#include <iostream>
using namespace std;


int main() {

    int sum=0, count=0;
    for (int n = 20; n> 0; n-=2){
        if (n%3 ==0){
            count++;
            continue;
        }
        sum += n;
    }
    cout<<"The sum is: "<<sum<<endl<<"The count is: "<<count<<endl;


    int i = 0, add = 0;
    while (i <= 10) {
        i++;
        if (i < 5 && i != 2) {
            cout << "i = " << i << endl;
        } else {
            continue;
        }
        add += i;
    }
    cout << "Add = " << add << endl;
    return 0;
}