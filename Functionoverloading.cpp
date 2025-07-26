#include<iostream>
using namespace std;

////------function-overloading------///


// int sum(int a,int b){
//     return a+b;
// }

// double sum(double a,double b){  // for the same work we had to declare another function here we can use function overloading

//     return a+b;
// }

// int sum(int a,int b,int c){
//     return a+b+c;
// }





bool isPrime(int n){
    if(n==1){
        return false;
    }
    for(int i=2;i*i<=n;i++){
        if(n%i==0){
            return false;
        }
        
    }
    return true;
}

int main(){

    // double a,b;
    // cout<<"enter first number:";
    // cin>>a;
    // cout<<"enter seecond number:";
    // cin>>b;
    // int c;
    // cout<<"enter third number: ";
    // cin>>c;

    // double res = sum(a,b,c);
    // cout<<"sum = "<<res<<endl;
    // return 0;






    ///----------print all primes in range 2 to N----------////

    int N;
    cout<<"enter N: ";
    cin>>N;

    for(int i=2;i<=N;i++){
        if(isPrime(i)){
            cout<<i<<" ";
        }

    }
    cout<<endl;
    return 0;

}