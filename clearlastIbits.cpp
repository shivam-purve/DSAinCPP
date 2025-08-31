#include<iostream>
#include<algorithm>
using namespace std;

void clearLastIBit(int &num,int i){
    // see logic from copy

    num = num & (~0<<i); // ~0 is -1 with all bits equal to 1.
}

int main(){
    int num;
    cout<<"enter number: ";
    cin>>num;

    int i;
    cout<<"enter how many bits yu want to clear from last: ";
    cin>>i;

    clearLastIBit(num,i);
    cout<<"the number after clearing last "<<i<<" bit is "<<num<<endl;
    return 0;
}