#include<iostream>
#include<string>

using namespace std;

int  printNthFibonacci(int n){
    if(n==0||n==1){
        return n;
    }

    return printNthFibonacci(n-1) + printNthFibonacci(n-2);

}

int main(){
    int n;
    cout<<"enter which fibonacci number yu want: ";
    cin>>n;
   int ans =  printNthFibonacci(n);
   cout<<"the nth fibonacci numbers is "<<ans<<endl;

    return 0;
}