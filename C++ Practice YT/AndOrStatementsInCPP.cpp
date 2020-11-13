#include <iostream>
using namespace std;

int main () {

    int n;
    cin>>n;

    if (n%2==0 && n%3==0 ) {
        cout<<"Divisible by both";
    }

    else if (n%2==0 || n%3==0) {
        cout<<"Divisible by 2 or 3";
    }

    else if ( n%2==0) {
        cout<<"Divisible by 2 only";
    }

    else if ( n%3==0) {
        cout<<"Divisible by 3 only";
    }

    else {
        cout<<"Number is not divisible by 2 or 3";
    }

    return 0;
}