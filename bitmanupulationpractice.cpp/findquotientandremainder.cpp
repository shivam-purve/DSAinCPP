#include<iostream>
#include<algorithm>
using namespace std;

int divide(int dividend,int divisor){
    long long quotient = 0;
    long long did = dividend,div = divisor;
    if(did == INT_MIN && div == -1){
        return INT_MAX;
    }
    long long dvd = abs(did);
    long long dvs = abs(div);

    while(dvd>=dvs){
        int idx = -1;
        while((idx +1)<31&&(dvs<<(idx+1))<=dvd){
            idx++;
        }

        dvd -= (dvs<<idx);
        quotient += (1LL<<idx); //ensure lon long addition


    }
    // for leetcode submission

if((dividend<0)^(divisor<0)){  //if only one carries negative
    return -quotient;

}
 return (int)quotient;


    
}

int main(){
    int dividend,divisor;

    cout<<"enter dividend: ";
    cin>>dividend;
    cout<<"enter divisor: ";
    cin>>divisor;

    int ans = divide(dividend,divisor);

    cout<<"the quotient of divide is: "<<ans<<endl;
    return 0;
}