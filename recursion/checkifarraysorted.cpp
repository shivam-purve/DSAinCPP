#include<iostream>
#include<string>

using namespace std;

bool isSorted(int arr[],int n,int idx){
    if(idx==n-1){
        return true;
    }
    if(arr[idx]>arr[idx+1]){
        return false;
    }

    return isSorted(arr,n,idx+1);

}

int main(){

    int n;
    cout<<"enter size of array: ";
    cin>>n;

    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    int idx = 0;

    if(isSorted(arr,n,idx)){
        cout<<"array is already sorted..\n";

    }
    else{
        cout<<"array is not sorted..\n";
    }

    return 0;
    
}

