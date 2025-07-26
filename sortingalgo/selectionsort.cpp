#include<iostream>
#include<limits>
using namespace std;

/// time complexxity of basics sorting algorithms is O(n^2)
// time complexity for allother sorting algo which is best is O(n.logn)...//
//O(nlogn) is better than O(n^2)....//

void selectionsortassending(int *arr,int n){
    
    for(int i=0;i<n-1;i++){
        int smallest_index=i;
        for(int j=i+1;j<n;j++){
            
            if(arr[j]<arr[smallest_index]){
                smallest_index = j;
            }

        }
        swap(arr[i],arr[smallest_index]);
    }
}

void selectionsortdessending(int *arr,int n){
    
    for(int i=0;i<n;i++){
        int largest_index=i;
        for(int j=i+1;j<n;j++){
            
            if(arr[j]>arr[largest_index]){
                largest_index = j;
            }

        }
        swap(arr[i],arr[largest_index]);
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
    selectionsortassending(nums,n);

    cout<<"after selection sort array in assending order is :"<<endl;

    for(int i=0;i<n;i++){
        cout<<nums[i]<<" ";
    }

    selectionsortdessending(nums,n);
     cout<<endl;

    cout<<"after selection sort array in dessending order is :"<<endl;

    for(int i=0;i<n;i++){
        cout<<nums[i]<<" ";
    }
    return 0;
}


