#include<iostream>
#include<algorithm>
using namespace std;


void clearIthBit(int &num,int pos){
    int bitmask = ~(1<<pos);
    num = (num & bitmask);
}

void setIthBit(int &num,int pos){
    int bitmask = (1<<pos);
    num = (num|bitmask);
}

void updateIthBit(int &num,int bit_pos,int val){ //means in binary form of that number set that particular bit position to the value given

    


    // if(val==0){
    //     clearIthBit(num,bit_pos);
    //     
    // }
    // else{
    //     setIthBit(num,bit_pos);
    //     
    // }

    //--yu can also use one program---//
    //first clear ith bit and make it zero

    num = num& ~(1<<bit_pos);
    num = num | (val<<bit_pos);





}

int main(){
    int num;
    cout<<"enter any number: ";
    cin>>num;

    int i,val;
    cout<<"enter bit position yu want to update: ";
    cin>>i;
    cout<<"enter value among 0 or 1 which bit should be updated to: ";
    cin>>val;

    updateIthBit(num,i,val);

    cout<<"the number after updation of ith bit is "<<num<<endl;
    return 0;
}