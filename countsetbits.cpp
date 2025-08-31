#include<iostream>
#include<algorithm>
using namespace std;


void countSetBits(int num){
    int count = 0;
    while(num>0){
        count += (num & 1); //add last bit value in count
        num = num>>1;
    }

    cout<<"the set bits in binary form of number is: "<<count<<endl;
}

int main(){
    int num;
    cout<<"enter any number: ";
    cin>>num;

    countSetBits(num);
    return 0;
}