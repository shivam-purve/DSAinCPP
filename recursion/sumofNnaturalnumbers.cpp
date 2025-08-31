#include<iostream>
#include<string>

using namespace std;

int Sum(int n){

    if(n==1){
        return 1;
    }
    return n + Sum(n-1);
}

int main(){
    int n;
    cout<<"enter any number: ";
    cin>>n;

    int res = Sum(n);
    cout<<"sum of first "<<n<<" natural numbers is "<<res<<endl;

    return 0;
}