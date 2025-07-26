#include<iostream>
using namespace std;

int bintodec(int n){
    int val=1,sum=0,dig = 0;
    while(n!=0){
        dig = n%10;
        sum+= dig*val;
        n/=10;
        val*=2;
    }
    return sum;
}

int dectobin(int n){
    int dig = 0,val = 1,binval = 0;
    while(n!=0){
        dig = n%2;
        binval+= val*dig;
        n/=2;
        val*=10;


    }
    return binval;
}












int main(){
    // int n;
    // cout<<"enter a binary number: ";
    // cin>>n;

    // int res = bintodec(n);
    // cout<<"decimal form for "<<n<<" is "<<res<<endl;




   ////------decimal to binary--------//






    int n;
    cout<<"enter a decimal number: ";
    cin>>n;

    int res = dectobin(n);
    cout<<"binary form for "<<n<<" is "<<res<<endl;
    return 0;
}