#include <iostream>
using namespace std;


void count(int n) {
    for (int i=1; i<=n; i++) {
        cout<<i<<" ";
    }
}



int main() {

    int n;
    cout<<"enter the value of n: ";
    cin>>n;

    count(n);


}