#include<iostream>

using namespace std;

int main(){
    int N;
    cout<<"enter how many fibonacci numbers yu want: ";
    cin>>N;

    int a =0,b=1;
    int sum=0;
    cout<<N<<" fibonacci numbers are:- "<<endl;
    cout<<a<<" "<<b<<" ";

    for(int i=2;i<N;i++){
        sum=a+b;
        cout<<sum<<" ";
        a=b;
        b=sum;


    }
    cout<<endl;
    return 0;



}