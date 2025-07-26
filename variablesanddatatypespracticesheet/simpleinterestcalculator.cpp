#include<iostream>
using namespace std;
 
int main(){
    float principal,rate,time;
    cout<<"enter principal amount: ";
    cin>>principal;
    cout<<"enter rate of interest in percent: ";
    cin>>rate;
    cout<<"enter time duration for loan in years : ";
    cin>>time;

    float simple_interest = ((principal)*(rate)*(time))/100;

    cout<<"simple interest for given time duration is "<<simple_interest;
    return 0;
}