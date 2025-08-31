#include<iostream>
#include<string>

using namespace std;

int power(int x , int n){
    if(n==1){
        return x;
    }


    return x*power(x,n-1);
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