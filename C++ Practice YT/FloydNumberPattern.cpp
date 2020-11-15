// Floyd's Number

#include <iostream>
using namespace std;

int main () {

    int count=1;

    int n;
    cout<<"Enter a Number:";
    cin>>n;

    for ( int i=1 ; i<=n ; i++) {
        for ( int j=1 ; j<=i ; j++) {
            cout<<count<<" ";
            count++;                  // We could've also written count=count+1;
        }
        cout<<endl;
    }
    return 0;
}