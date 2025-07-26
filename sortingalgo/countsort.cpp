#include<iostream>
using namespace std;

void countsortassending(int *arr,int n){
    int freq[100000]={0};
    int maxVal=INT_MIN;
    int minVal = INT_MAX;

    for(int i=0;i<n;i++){
        minVal = min(minVal,arr[i]);
        maxVal = max(maxVal,arr[i]);
    }
    // 1st step-   O(n)
    for(int i=0;i<n;i++){
        freq[arr[i]]++;

    }

    //2nd step--O(range)--// maxVal-minVal
    for(int i=minVal,j=0;i<=maxVal;i++){
        while(freq[i]>0){
            arr[j++] = i;
            freq[i]--;
        }
    }
}


void countsortdessending(int *arr,int n){
    int freq[100000]={0};
    int maxVal=INT_MIN;
    int minVal = INT_MAX;

    for(int i=0;i<n;i++){
        minVal = min(minVal,arr[i]);
        maxVal = max(maxVal,arr[i]);
    }
    // 1st step-   O(n)
    for(int i=0;i<n;i++){
        freq[arr[i]]++;

    }

    //2nd step--O(range)--// maxVal-minVal
    for(int i=maxVal,j=0;i>=minVal;i--){
        while(freq[i]>0){
            arr[j++] = i;
            freq[i]--;
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
    countsortassending(nums,n);

    cout<<"after count sort array in assending order is :"<<endl;

    for(int i=0;i<n;i++){
        cout<<nums[i]<<" ";
    }
    cout<<endl;

     countsortdessending(nums,n);

    cout<<"after count sort array in dessending order is :"<<endl;

    for(int i=0;i<n;i++){
        cout<<nums[i]<<" ";
    }

    return 0;


}
