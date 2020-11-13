#include <iostream>
using namespace std;

int main() {

    int n;
    cout<<"Enter a positive Integer:";
    cin>>n;

    int mlt;
    for ( int i = 1 ; i<=10 ; ++i) {
        cout<<n<<"*"<<i<<"="<<i*n<<endl;
    }
    return 0 ;
}