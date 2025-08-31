#include<iostream>
using namespace std;


int partition(int arr[],int si,int ei){
    int i = si-1,pivot = arr[ei];
    for(int j=si;j<ei;j++){
        if(arr[j]<=pivot){
            i++;
            swap(arr[i],arr[j]);

        }
    }
    i++;
    swap(arr[i],arr[ei]);

    return i; //returning pivotidx;
    
}

void quicksort(int arr[],int si,int ei){
    if(si>=ei){
        return;
    }
     
    int pivotIdx = partition(arr,si,ei);
    quicksort(arr,si,pivotIdx-1); //left half
    quicksort(arr,pivotIdx + 1,ei); //right half


}

void printarray(int arr[],int n){
    for(int i =0;i<n;i++){
        cout<<arr[i]<<" ";
    }


}

int main(){
    int n;
    cout<<"enter value of n: ";
    cin>>n;

    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];

    }

    quicksort(arr,0,n-1);
    printarray(arr,n);

    return 0;

}