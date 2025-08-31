#include<iostream>
#include<vector>
using namespace std;



void merge(int arr[],int si,int mid,int ei){
    vector<int>temp;

    int i = si,j = mid + 1;

    while(i<=mid && j<= ei){
        if(arr[i]<=arr[j]){
              temp.push_back(arr[i++]);

        }else{
            temp.push_back(arr[j++]);
        }
      
    }

    while(i<=mid){
        temp.push_back(arr[i++]);
    }
    while(j<=ei){
        temp.push_back(arr[j++]);
    }

    // copy in to original array--
  for(int i= si,x = 0;i<=ei;i++){
    arr[i] = temp[x++];
  }
}

void printarray(int arr[],int n){
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}









void mergesort(int arr[],int si,int ei){

    if(si>=ei){
        return;
    }

    int mid = si + (ei - si)/2;
 
    mergesort(arr,si,mid);    //divide in to left half
    mergesort(arr,mid+1,ei);  //divide into leftright


    merge(arr,si,mid,ei);// conquer

}


int main(){
    int n;
    cout<<"enter size of an array: ";
    cin>>n;

    int arr[n];


    for(int i=0;i<n;i++){
        cin>>arr[i];

    }

    mergesort(arr,0,n-1);
    printarray(arr,n);

    return 0;



}
