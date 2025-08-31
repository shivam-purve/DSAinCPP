#include<iostream>
using namespace std;
# define ll long long

const ll MOD = 1e9 + 7;

// this below code for just smaller values of n
// int goodString(ll n,ll i,ll count,int evenways,int primeways){
//     if(i==n){
        
//         return count%MOD;
//     }
    
    

//     if(i%2==0){
//         count = (count*evenways)%MOD;
       
//     }
//     else{
//         count = (count*primeways)%MOD;
//     }
//      return goodString(n,i+1,count,evenways,primeways);

// }


ll modpow(ll base,ll exp){
    if(exp==0){
        return 1;
    
    }
    ll half = modpow(base,exp/2);
    ll res = half* half;

    if(exp%2) res = (res*base)%MOD;
    return res;


}

ll goodString(ll n){
    ll evencount = (n+1)/2;
    ll oddcount = n/2;

    ll evenways = modpow(5,evencount);
    ll oddways = modpow(4,oddcount);

    return (evenways*oddways)%MOD;
}

int main(){
    ll n;
    cin>>n;
    cout<< goodString(n)<<"\n";

    return 0;
}