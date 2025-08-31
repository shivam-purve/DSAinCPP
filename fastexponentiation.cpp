#include<iostream>
#include<algorithm>
using namespace std;

void fastExponentiation(int x,int n){ // yu have to calculate x^n
    int ans = 1;
    int y = x; //just copying x to y for cout at last
    int num = n; //just copying n to num for cout at last
    while(n>0){ //maincondition on n---//
        int lastBit = n & 1;
        if(lastBit){ //if lastBit ==1
            ans *= x;
        }
         x *= x;
        
         n =  n>>1; //for next lastBinary digit

    }

    cout<<"the "<<y<<" raised to power "<<num<<" is "<<ans<<endl;


}

int main(){

    int x,n;
    cout<<"enter x:";
    cin>>x;
    cout<<"enter n: ";
    cin>>n;

    fastExponentiation(x,n);
    return 0;
}