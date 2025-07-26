#include<iostream>
using namespace std;

int searchinrotatedsortedarray(int *nums,int n,int target){
    int st = 0,end = n-1;
    while(st<=end){

        int mid = st + (end-st)/2;
        if(nums[mid]==target){
            return mid;
        }

        //left sorted array//

        if(nums[st]<=nums[mid]){
            if(target>=nums[st]&& target<nums[mid]){
                end = mid-1;
            }
            else{
                st = mid+1;
            }
        }
        else{ // right sorted array
             if(target>nums[mid]&&target<=nums[end]){
                st = mid+1;
             }
             else{
                end=mid-1;
             }
        }
        


    }
    return -1;
}

int main(){
    int n;
    cout<<"enter number of elemnts: ";
    cin>>n;

    int nums[n];
    for(int i=0;i<n;i++){
        cin>>nums[i];
    }
    int target;
    cout<<"enter target element yu want to search :";
    cin>>target;

    int res = searchinrotatedsortedarray(nums,n,target);

    cout<<res<<endl;
    return 0;
}