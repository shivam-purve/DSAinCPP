#include<iostream>
#include<algorithm>
using namespace std;

void bubblesortassending(int *arr,int n){  //assending order...//
    for(int i=0;i<n-1;i++){
        bool isSwap = false;
        for(int j=0;j<n-1-i;j++){
            if(arr[j]>arr[j+1]){  // yu can directly write swap(arr[j],arr[j+1])..//
                int temp = arr[j];
                arr[j] = arr[j+1];
                arr[j+1]=temp;
                isSwap = true;
            }
        }
        if(!isSwap == false){
            //array is already sorted
            return ;
        }

    }
}

void bubblesortdessending(int *arr,int n){  //assending order...//
    for(int i=0;i<n-1;i++){
        for(int j=0;j<n-1-i;j++){
            if(arr[j]<arr[j+1]){
                int temp = arr[j];
                arr[j] = arr[j+1];
                arr[j+1]=temp;
            }
        }

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
    bubblesortassending(nums,n);

    cout<<"after bubble sort array in assending order is :"<<endl;

    for(int i=0;i<n;i++){
        cout<<nums[i]<<" ";
    }

     bubblesortdessending(nums,n);
     cout<<endl;

    cout<<"after bubble sort array in dessending order is :"<<endl;

    for(int i=0;i<n;i++){
        cout<<nums[i]<<" ";
    }
    return 0;


}