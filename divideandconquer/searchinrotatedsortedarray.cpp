#include<iostream>
using namespace std;

int searchinrotatedsortedarray(int arr[],int target,int st,int end){
   
  if(st>end){
    return -1;
  }

    //check if which part is sorted
      int mid = st + (end-st)/2;


      if(arr[mid]==target){
        return mid;
      }
      //here code starts---//

       if(arr[st]<=arr[mid]){

        
        //left part is soretd
         if(arr[st]<=target && arr[mid]>=target){
             searchinrotatedsortedarray(arr,target,st,mid-1);
         }
         else{
            searchinrotatedsortedarray(arr,target,mid+1,end);
         }


    }
    else{
        //right part is sorted
        if(arr[mid]<=target && arr[end]>=target){
            searchinrotatedsortedarray(arr,target,mid+1,end);

        }
        else{
            searchinrotatedsortedarray(arr,target,st,mid-1);
        }
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

    int target;
    cout<<"enter element yu want to search: ";
    cin>>target;

    int idx = searchinrotatedsortedarray(arr,target,0,n-1);

    cout<<"the target is at index: "<<idx<<endl;
    return 0;


}