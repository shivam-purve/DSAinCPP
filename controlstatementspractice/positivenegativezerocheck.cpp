#include<iostream>
using namespace std;

int main(){
    float num;
    cout<<"enter any number: ";
    cin>>num;

    if(num>0){
        cout<< num <<" is positive "<<endl;
    }
    else if(num<0){
        cout<< num <<" is negative "<<endl;
    }
    else{
        cout<< "given number is zero "<<endl;
    }
    return 0;
}