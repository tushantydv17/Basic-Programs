#include <iostream>
using namespace std;



int power(int a, int b){

    int prod = 1;
    cout<<"enter the value of a and b: ";
    cin>>a>>b;
    for (int i=1; i<=b; i++) {
        prod = prod*a;
    }

    return prod;

}

int main() {

    int a, b;
    int prod= power(a,b);
    cout<<"Ans is "<<prod;
}