#include<iostream>
#include<string>
#include<vector>
using namespace std;

void merge(string arr[],int si,int ei,int mid){
    vector<string>temp;
    int i = si,j=mid+1;

    while(i<=mid && j<= ei){
        if(arr[i]<=arr[j]){
            temp.push_back(arr[i++]);
        }
        else{
            temp.push_back(arr[j++]);

        }

    }
    while(i<=mid){
        temp.push_back(arr[i++]);

    }
    while(j<=ei){
        temp.push_back(arr[j++]);
    }


    for(int j=si,x=0;j<=ei;j++){
        arr[j] = temp[x++];
    }




}

void mergesort(string arr[],int si,int ei){
    if(si>=ei){
        return ;
    }
    int mid = si + (ei-si)/2;
    mergesort(arr,si,mid);
    mergesort(arr,mid+1,ei);
    merge(arr,si,ei,mid);


}

void printarray(string arr[],int n){
    for(int i=0;i<n;i++){
        cout<< arr[i]<<" ";
    }
}

int main(){
     int n;
     cout<<"enter value of n: ";
     cin>>n;

     string arr[n];
     cout<<"enter strings for array: ";
     for(int i = 0;i<n;i++){
        cin>>arr[i];
     }

     mergesort(arr,0,n-1);

     printarray(arr,n);

     return 0;
}