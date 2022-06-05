#include <iostream>
using namespace std;

int main() {

    int n;
    cout<<"enter the value of n: ";
    cin>>n;
    int newno=n;
    int sum=0;
    int product=1;
    for (int i=0; i<3; i++) {
        int lastdigit= newno%10;
        
        sum=sum+lastdigit;
        newno=newno/10;

        product=product*lastdigit;

    }
    cout<<"the sum is "<<sum<<endl;
    cout<<"the product is "<<product;

}
