#include<iostream>
#include<stdio.h>
using namespace std;
int main(){
    int n,marks[20];
    cout<<"Input your number: ";
    cin>>n;
    for(int i=0; i<n; i++){
        cout<<"Marks for Student "<<i+1<<" = ";
        cin>>marks[i];
    }
    cout<<"\tMarks are::"<<endl;
    for(int i=0; i<n; i++){
        cout<<marks[i]<<endl;
    }
    return 0;
}
