#include<iostream>
using namespace std;

int sumofdig(int n){
    int dig = 0,sum = 0;
    while(n!=0){
        dig = n%10;
        sum+=dig;
        n/=10;
    }
    return sum;
}

int main(){
    int n;
    cout<<"enter a number: ";
    cin>>n;

    int res= sumofdig(n);
    cout<<"sum of digits of "<<n<<" is "<<res<<endl;
    return 0;
}