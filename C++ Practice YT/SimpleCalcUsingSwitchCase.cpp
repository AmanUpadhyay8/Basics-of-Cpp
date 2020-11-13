// Simple calculator using switch case

#include <iostream>
using namespace std;

int main  () {

    int n1 ;
    cout<<"Enter the First Number:"<<endl;
    cin>>n1;

    int n2 ;
    cout<<"Enter the second number:"<<endl;
    cin>>n2;

    char op;
    cout<<"Enter the operation you want to perform:";
    cin>>op;

    switch (op)
    {
    case  '+' :
        cout<<n1+n2<<endl;
        break;
    
    case '-' :
        cout<<n1-n2;
        break;
    
    case '*' :
        cout<<"n1*n2";
        break;
    
    case '/' :
        cout<<n1/n2;
        break;
    default:
        cout<<"Enter valid Operator"<<endl;
        break;
    }
}