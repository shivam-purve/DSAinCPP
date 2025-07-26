#include<iostream>

using namespace std;
int main(){

    int num;
    cout<<"enter a number: ";
    cin>>num;

    int temp = num;
    int dig = 0,sum=0;

    while(num!=0){
        dig = num%10;
        sum+= dig*dig*dig;
        num/=10;

    }
    if(temp==sum){
        cout<<temp<<" is a Armstrong number"<<endl;
    }
    else{
        cout<<temp<<" is not a Armstrong number"<<endl;
    }
}
