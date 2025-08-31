#include<iostream>
#include<vector>
using namespace std;

int power(int x , int n){   // T.C = O(logn)--//
    if(n==0){
        return 1;

    }


    int halfPow = power(x,n/2);
    int halfPowSq = halfPow*halfPow;

    if(n%2!=0){
        return x*halfPowSq;
    }

    return halfPowSq;
}




    int main(){
    int x,n;
    cout<<"enter any base: ";
    cin>>x;
    cout<<"enter power: ";
    cin>>n;


    int res = power(x,n);
    cout<<"power of "<<x<<" raised to "<<n<<" is "<<res<<endl;

    return 0;


}

