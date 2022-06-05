#include <iostream>
using namespace std;


bool isEven(int a) {
    if(a&1) {
        return 0;
    }
    return 1;
}


int main() {

    int num;
    cout<<"enter the value of a: ";
    cin>>num;

    if (isEven(num)) {
        cout<<"the no is even!";
    }
    else {
        cout<<"the no is odd!";
    }
}
