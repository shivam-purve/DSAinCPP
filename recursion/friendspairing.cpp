#include<iostream>
#include<string>

using namespace std;

int friendsPairing(int n){
    if(n==1 || n==2){
        return n;
    }

    return friendsPairing(n-1) + (n-1)*friendsPairing(n-2);


}

int main(){
    int n;
    cout<<"enter number of friends: ";
    cin>>n;

    int ans = friendsPairing(n);

    cout<<"total ways is: "<<ans<<endl;
    return 0;

}

