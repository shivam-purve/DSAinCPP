#include<iostream>
#include<cmath>

using namespace std;

int main(){
    int n;
    cout<<"enter a number: ";
    cin>>n;
    cout<<"prime numbers from 2 TO " <<n<<" is:- "<<endl;

    for(int num=2;num<=n;num++){
        bool isPrime = true;
       
        for(int i =2;i<=sqrt(num);i++){
            if(num%i==0){
                isPrime = false;
                break;
            }
        }
        if(isPrime){
            cout<<num<<" ";
        }
    }
    return 0;
}