#include<iostream>
using namespace std;

bool checkduplicate(int *nums,int n){
    int freq[100000]={0};
    for(int i=0;i<n;i++){
        freq[nums[i]]++;
    }
    for(int i=0;i<n;i++){
        if(freq[i]>1){
            return true;
        }
    }
    return false;
}

int main(){
    int n;
    cout<<"enter number of elements: ";
    cin>>n;

    int nums[n];
    for(int i=0;i<n;i++){
        cin>>nums[i];
    }
    if(checkduplicate(nums,n)){
        cout<<"true"<<endl;
    }
    else{
        cout<<"false"<<endl;
    }
    return 0;
}