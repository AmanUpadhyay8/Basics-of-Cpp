//Program to print a Pattern 

#include <iostream>
using namespace std;

int main() {

    int row;
    cout<<"Enter the number of rows:";
    cin>>row;

    int col;
    cout<<"Enter the number of Column";
    cin>>col;

    for ( int i = 1 ; i<=row ; i++) {
        for ( int j = 1 ; j<=col ; j++) {
            if ( i==1 || i==row) {
                cout<<"*";
            }
            else if ( j==1 || j==col) {
                cout<<"*";
            }
            else {
                cout<<" ";
            }
        }
        cout<<endl;
    }


    return 0;
    


}