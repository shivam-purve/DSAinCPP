#include<iostream>
using namespace std;


void insertionsortassending(int *arr,int n){
    for(int i=1;i<n;i++){
        int curr = arr[i];
        int prev = i-1;
        while(curr<arr[prev]&&prev>=0){
            
            swap(arr[prev],arr[prev+1]);
            prev--;
        }
        arr[prev+1]=curr;
    }
}

void insertionsortdessending(int *arr,int n){
    for(int i=1;i<n;i++){
        int curr = arr[i];
        int prev = i-1;
        while(curr>arr[prev]&&prev>=0){
            
            swap(arr[prev],arr[prev+1]);
            prev--;
        }
        arr[prev+1]=curr;
    }
}


int main(){

     int n;
    cout<<"enter number of elements: ";
    cin>>n;

    int nums[n];
    for(int i=0;i<n;i++){
        cin>>nums[i];
    }
    insertionsortassending(nums,n);

    cout<<"after insertion sort array in assending order is :"<<endl;

    for(int i=0;i<n;i++){
        cout<<nums[i]<<" ";
    }

    cout<<endl;

     insertionsortdessending(nums,n);

    cout<<"after insertion sort array in dessending order is :"<<endl;

    for(int i=0;i<n;i++){
        cout<<nums[i]<<" ";
    }

    return 0;


}