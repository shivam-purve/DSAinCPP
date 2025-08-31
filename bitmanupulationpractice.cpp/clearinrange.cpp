#include<iostream>
#include<algorithm>

using namespace std;

void clearInRange(int &num,int i,int j){
    //see the logic in copy itself

    int bitmask1 = ~0<<(j+1); //made all bit as 1 with first starting j+1 bit as zero by leftshift
    int bitmask2 = bitmask1 | (~(~0<<i)); //then made first i bits as 1 i.e set first i bit as 1
     
    num = num & bitmask2;

    cout<<"after clearing bits in given range the number becomes: "<<num<<endl;

}

int main(){

    int num,i,j;
    cout<<"enter any number: ";
    cin>>num;

    cout<<"enter the first starting range for clearing the bit: ";
    cin>>i;

    cout<<"enter the last ending range for clearing the bit: ";
    cin>>j;

    clearInRange(num,i,j);
    return 0;
}