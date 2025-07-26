#include<iostream>
using namespace std;
typedef long long ll; //typedef
#define db double   //macros

int x = 25;  //// Global scope variable x

void sayname(){
    cout<<"shivam purve\n";
    return;
}

void assistant(){
    sayname();
    cout<<"work done";

    return ;

}

int sum(int a,int b=1){  /// here b = 1 shows defalut parameter when only a value as argiment is given also always frst parameter cant be default
    int sum = a+b;
    return sum;
}

///-----------practiceq's------///

int product(int a,int b){
    int prod = a*b;
    return prod;
}

bool iseven(int n){
    if(n%2==0){
        return true;
    }
    else{
        return false;
    }
}

int factorial(int n){
    int prod = 1;
    for(int i=1;i<=n;i++){
        prod *=i;

    }
    return prod;
}

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

db bincoeff(int n,int r){
    return (factorial(n)/(factorial(r)*factorial(n-r)));
}










int main(){
    // sayname();//function call

    // assistant();
    // int res = sum(2);


    ///--practice----///
    // int a,b;
    // cout<<"enter first number: ";
    // cin>>a;
    // cout<<"enter second number: ";
    // cin>>b;

    // int res = product(a,b);
    // cout<<"product of "<<a<<" and "<<b<<" is "<<res<<endl;
  

    ///-----odd or even----//

    // int n;
    // cout<<"enter a number: ";
    // cin>>n;

    // if(iseven(n)){
    //     cout<<"is a even number"<<endl;
    // }
    // else{
    //     cout<<"is a odd number"<<endl;
    // }



    ////------------FACTORIAL-------------//

    // int n;
    // cout<<"enter a number: ";
    // cin>>n;

    // int res = factorial(n);
    // cout<<"factorial of "<<n<<" is "<<res<<endl;



    //------------check prime or not---------//

    // int n;
    // cout<<"enter a number: ";
    // cin>>n;

    // if(isPrime(n)){
    //     cout<<"given number is Prime";
    // }
    // else{
    //     cout<<"given number is not Prime";
    // }
    // cout<<endl;



    ///------Binomial coefficients---------//

    int n,r;
    cout<<"enter n: ";
    cin>>n;
    cout<<"enter r: ";
    cin>>r;

    db coefficient = bincoeff(n,r);

    cout<<"binomial coefficient is : "<<coefficient<<endl;

    


    return 0;
}