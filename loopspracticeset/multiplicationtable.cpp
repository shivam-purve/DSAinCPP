#include<iostream>
using namespace std;

int main(){
    int num;
    cout<<"enter a number: ";
    cin>>num;

    cout<<"multiplication table for "<<num<<" is:- "<<endl;

    for(int mul=1;mul<=10;mul++){
        cout<<num*mul<<endl;
    }
    return 0;
}