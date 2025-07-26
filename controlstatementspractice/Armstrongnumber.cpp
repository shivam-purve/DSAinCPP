#include<iostream>
using namespace std;
 int main(){

    int num;
    cout<<"enter any 3 digit number : ";
    cin>>num;
    int temp = num;
    int rem=0,sum=0;
   while(num!=0){
    rem = num % 10;
    sum+=(rem*rem*rem);
    num/=10;

    
   }

   if(sum == temp){
    cout<< temp <<" is a Armstrong number "<<endl;
   }
   else{
    cout<< temp <<" is not a Armstrong number "<<endl;
   }

   return 0;


 }