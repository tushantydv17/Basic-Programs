#include <iostream>
using namespace std;

/*
int main() {
  for (int i=1; i<5; i++) {
    cout<<"Hey"<<endl;
    cout<<"hi"<<endl;
    cout<<"hello"<<endl;
    continue;
    cout<<"idhar bhi dekh le";
  }
}
*/

int main() {

  for (int i=0; i<5; i++) {
    for (int j=i; j<=5; j++) {
      cout<<i<<" "<<endl;
    }
  }
}