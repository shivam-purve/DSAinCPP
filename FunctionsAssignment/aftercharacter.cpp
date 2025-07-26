#include<iostream>
using namespace std;

char nextchar(char ch){
    if(ch=='Z'){
        return 'A';
    }
    return (ch + 1);
}

int main(){
    char ch;
    cout<<"enter any alphabet character (from 'A' to 'Y'): ";
    cin>>ch;

    char next = nextchar(ch);
    cout<<"next character to "<<ch<<" is "<<next<<endl;
    return 0;
}