#include<iostream>
using namespace std;
typedef long long ll;
#define db double

ll largest(ll a, ll b, ll c){
    if(a>b){
        if(a>c){
            return a;
        }
        else{
            return c;
        }
    }
    else{
        if(b>c){
            return b;
        }
        else{
            return c;
        }
    }
}

int main(){
    ll a,b,c;
    cout<<"enter first number: ";
    cin>>a;
    cout<<"enter second number: ";
    cin>>b;
    cout<<"enter third number: ";
    cin>>c;

    ll res = largest(a,b,c);
    cout<<"largest of "<<a<<","<<b<<" and "<<c<<" is "<<res<<endl;
}