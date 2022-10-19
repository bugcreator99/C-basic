#include<iostream>
using namespace std;

int main(){
    char c;
    int lower,upper;

    cout<<"Enter an alphabet: ";
    cin>>c;

    lower = (c=='a'||c=='e'||c=='i'||c=='o'||c=='u');
    upper = (c=='A'||c=='E'||c=='I'||c=='O'||c=='U');

    if(lower || upper)
        cout<< c <<" is Vowel.";
    else
        cout<< c <<" is Consonant.";

    return 0;
}
