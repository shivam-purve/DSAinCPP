#include<iostream>
using namespace std;
#define ll long long

int main(){

    ll n;
    cout<<"enter a number: ";
    cin>>n;

    ll factorial = 1;
     for(int i=1;i<=n;i++){
        factorial*=i;
     }
     cout<<"factorila of "<<n<<" is "<<factorial<<endl;
     return 0;
}