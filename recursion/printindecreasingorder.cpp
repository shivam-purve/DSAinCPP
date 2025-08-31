#include<iostream>
#include<string>
using namespace std;

void printDecreasingOrder(int n){
    if(n==1){
        cout<<n<<" ";
        return;
    }

    cout<<n<<" ";
     printDecreasingOrder(n-1);
}

void printAssendingOrder(int n){
    if(n==1){
        cout<<n<<" ";
        return;
    }
    
  printAssendingOrder(n-1);
  cout<<n<<" ";
    
   
}

int main(){

    int n;
    cout<<"enter value of n: ";
    cin>>n;

    printDecreasingOrder(n);

    printAssendingOrder(n);

    return 0;


}