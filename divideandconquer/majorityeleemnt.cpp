#include<iostream>
#include<string>
#include<algorithm>
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
    cout<<"enter elements in array: ";
    for(int i = 0;i<n;i++){
        cin>>arr[i];
    }

     // approach-1-- stores frequency of each element and then check whose freq is greater than n/2
    

    // int freq[100000] = {0};
    // for(int i=0;i<n;i++){
    //     freq[arr[i]]++;
    // }

    // for(int i=0;i<100000;i++){
    //     if(freq[i]>n/2){
    //         cout<<i;
    //     }
    // }


    // approach-2----// sort and most probably the mid element will be majority element


    // mergesort(arr,0,n-1);
    // for(int i:arr){
    //     cout<<i<<" ";
    // }
    // cout<<endl;

    // int majority = arr[n/2];
    // int count = 0;
    // for(int i=0;i<n;i++){
    //     if(arr[i]==majority){
    //         count++;
    //     }
    // }
    // if(count>n/2){
    //     cout<<majority<<endl;

    // }
    // else{
    //     cout<<-1<<endl;
    // }



    //-----------optimised approach-----//
    // moores voting algorithm---//
   
    int count = 0,majority = 0;
    for(int i=0;i<n;i++){
        if(count==0){
             majority = arr[i];
        }
        if(arr[i]==majority){
            count++;
        }
        else{
            count--;
        }

    }

    cout<<"majority element is: "<<majority<<endl;



    return 0;

}

