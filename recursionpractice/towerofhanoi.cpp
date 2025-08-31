#include<iostream>
using namespace std;

void towerOfHanoi(int n,string src,string helper,string dest){
    if(n==1){
        cout<<"transer disk "<<n<<" from "<<src<<" to "<<dest<<endl;
        return ;
    }
    // transfer top n-1 disk from src to helper using dest as 'helper'


    towerOfHanoi(n-1,src,dest,helper);
    //transfer nth from src to destination
    cout <<"transfer disk "<<n<<" from "<<src<<" to "<<dest<<endl;

    //ransfer n-1 disk from helper to dest using src as helepr

    towerOfHanoi(n-1,helper,src,dest);
}

int main(){
    int n = 3;
    towerOfHanoi(3,"A","B","C");

    return 0;
}