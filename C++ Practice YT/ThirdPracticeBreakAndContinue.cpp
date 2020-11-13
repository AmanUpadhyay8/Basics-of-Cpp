//To check whether the number is prime or not

#include <iostream>
using namespace std;

int main () {

    int n ;
    cout<<"Enter the Number:";
    cin>>n;

    int i ;

    for  (  i = 2 ; i<n ; i++) {
        if ( n % i == 0 ){
            cout<<"Non Prime"<<endl;
            break;
        }
        
    }
    if (i==n) {
        cout<<"Prime Number"<<endl;
    }

    return 0;

}