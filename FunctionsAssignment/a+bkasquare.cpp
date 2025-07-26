#include<iostream>
using namespace std;
typedef long long ll;
#define db double

db find(db a,db b){  // calculate (a+b)^2
    return (a*a + b*b + 2*a*b);
}

int main(){
    db a,b;
    cout<<"enter first number: ";
    cin>>a;
    cout<<"enter second number: ";
    cin>>b;

    db res = find(a,b);
    cout<<"required value is "<<res<<endl;
    return 0;
}