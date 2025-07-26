#include<iostream>
#include<limits>
#include<algorithm>
using namespace std;

void kadansalgo(int *arr,int n){
    int currsum = 0;
    int maxsum = INT_MIN;
    for(int i=0;i<n;i++){
        
        currsum+=arr[i];
        maxsum = max(maxsum,currsum);
        if(currsum<0){
            currsum=0;
        }
        
    }
    cout<<"maximum subarray sum is "<<maxsum<<endl;
}

int main(){
    int n;
    cout<<"enter size of n: ";
    cin>>n;

    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    kadansalgo(arr,n); // time complexity is O(n)
    return 0;
}