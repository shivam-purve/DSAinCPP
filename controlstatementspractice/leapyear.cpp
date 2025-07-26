#include<iostream>
using namespace std;

int main(){
    int year;
    cout<<"enter a year: ";
    cin>>year;

    //check for non-century year 
if((year%100)!=0){  // not a century year
    if((year%4) == 0){
        cout<<year<<" is a leap year "<<endl;

    }
    else{
        cout<<year <<" is not a leap year "<<endl;
    }
}
  //// check for century year ---///

  // like 2000 is century year and also divisible by 400 so this is leap year

  
if((year%100)==0){  // a century year like 1900 is century year but not divisible by 400 so is not a leap year
    if((year%400)==0){
        cout<<year<<" is a leap year "<<endl;
        
    }
    else{
        cout<<year<<" is a not leap year "<<endl;
    }

}
return 0;
}