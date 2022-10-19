#include<iostream>
using namespace std;

int main(){
    int divisor,dividend,quotient,reminder;

    cout<<"Enter dividend: ";
    cin>>dividend;

    cout<<"Enter divisor: ";
    cin>>divisor;

    quotient = dividend / divisor;
    reminder = dividend % divisor;

    cout<<"quotient: "<<quotient<<endl;
    cout<<"reminder: "<<reminder;

    return 0;
}
