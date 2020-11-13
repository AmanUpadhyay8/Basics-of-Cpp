#include <iostream>
using namespace std;

int main () {

    cout<<"'This Program takes input from the user and prints the sum of all the positive inputs'"<<endl;
    cout<<"'To End this program and get your sum enter a negative number'"<<endl;

    int n;
    int sum = 0;

    cout<<"Enter a Number:";
    cin>>n;

    while (n>=0) {
        sum += n;
        cout<<"Enter a Number";
        cin>>n;
    }
    cout<<"\n The sum of positive numbers is :"<<sum<<endl;

    return 0;
}