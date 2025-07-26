#include<iostream>
using namespace std;

int rev(int n){
    int rem = 0,sum=0;
    while(n!=0){
        rem = n%10;
        sum = sum*10 + rem;
        n/=10;
    }
    return sum;
}

bool isPalindrome(int n){
    if(n==rev(n)){
        return true;
    }
    else{
        return false;
    }
}

int main(){
    int n;
    cout<<"enter a number: ";
    cin>>n;

    if(isPalindrome(n)){
        cout<<n<<" is a palindrome number"<<endl;
    }
    else{
        cout<<n<<" is not a palindrome number"<<endl;
    }
    return 0;

}