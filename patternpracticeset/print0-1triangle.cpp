#include<iostream>
using namespace std;

int main(){
    int n;
    cout<<"enter a number: ";
    cin>>n;
   

    for(int i=1;i<=n;i++){
        int a = (i%2==1)? 1 : 0;
        for(int j=1;j<=i;j++){
            
              cout<<a;
              a=1-a;
        }
        cout<<endl;
    }
    cout<<endl;
    return 0;
}