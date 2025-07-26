#include<iostream>
#include<limits>
using namespace std;

int max(int a,int b){
    if(a>b){
        return a;
    }
    else{
        return b;
    }
}


void maxsubarraysum(int *arr,int n){
    int maxsum =INT_MIN;
    
    for(int st=0;st<n;st++){
        int currsum = 0;
        for(int end = st;end<n;end++){
            currsum+=arr[end];
            maxsum=max(maxsum,currsum);

        }
    }
    cout<<"maxsum subarray sum is: "<<maxsum<<endl;
}

int main(){
    int n;
    cout<<"enter your size of array:";
    cin>>n;

    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    maxsubarraysum(arr,n);
    return 0;
}