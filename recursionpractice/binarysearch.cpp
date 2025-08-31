#include<iostream>
using namespace std;

int binSearch(int *arr,int st,int end,int target){

    if(st>end){
        return -1;
    }
    int mid = st + (end-st)/2;
    if(arr[mid]==target){
        return mid;
    }
    else if (arr[mid]<target){
          binSearch(arr,mid+1,end,target);

    }
    else (arr[mid]>target){
          binSearch(arr,st,mid-1,target);

    }

    
  

  
}

int main(){
    int n;
    cout<<"enter size of array: ";
    cin>>n;

    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }

    int target;
    cout<<"enter key yu want to search: ";
    cin>>target;

    int idx = binSearch(arr,0,n-1,target);
    cout<<"the desired index is: "<<idx<<endl;

    return 0;
}