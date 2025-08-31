#include<iostream>
#include<string>
#include<vector>
using namespace std;

int firstOccurence(vector<int>arr,int target,int idx){

    int n = arr.size();
    if(arr[idx]==target){
        return idx;
    }
    else if(idx==n){
        return -1;
    }
    else{
        return  firstOccurence(arr,n,target,idx+1);
    }

}

int main(){
    int n;
    cout<<"enter size of array: ";
    cin>>n;

    vector<int>arr(n);
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    int idx = 0,target;
    cout<<"enter target element yu want to search: ";
    cin>>target;

    int index = firstOccurence(arr,target,idx);

    cout<<"first occurence index of target is: "<<index<<endl;

    return 0;


}