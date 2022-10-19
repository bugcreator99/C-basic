#include<iostream>
using namespace std;

int main(){
    int year;

    cout<<"Enter a year: ";
    cin>>year;

    if(year%4 ==0){
            if(year%100==0){
                if(year%400==0)
                    cout<<year<<" is Leap year";
                else
                    cout<<year<<" is not Leap year";
            }
            else
                cout<<year<<" is Leap year";
    }
    else
        cout<<year<<" is not Leap year";

    return 0;
}
