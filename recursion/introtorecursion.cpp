#include<iostream>
#include<string>
using namespace std;

int factorial(int n){
    if(n==0){
        return 1;
    }

    return n*factorial(n-1);
}

int main(){

    int n;
    cout<<"enter any number: ";
    cin>>n;
    int res = factorial(n);

    cout<<"factorial is "<<res<<endl;

    return 0;
}