//To print numbers till 100 which are not divisible by 3


#include <iostream>
using namespace std;

int main () {

    int n = 100;
    
    for ( int i = 1 ; i<=n ; i++) {

        if ( i % 3 == 0) {
            continue;
        }
        cout<<i<<" ";
    }

    return 0;
}
