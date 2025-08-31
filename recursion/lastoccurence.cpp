#include<iostream>
#include<string>
#include<vector>
using namespace std;

int lastOccurence( vector<int>vec,int target,int idx){
    if(idx==vec.size()){
        return -1;
    }
    int idxFound = lastOccurence(vec,target,idx + 1);
    if(idxFound == -1 && vec[idx]==target){
        return idx;

    }
    
    return idxFound;
   

    
}

int main(){
    int n;
    cout<<"enter size of array: ";
    cin>>n;

    vector<int> vec(n);
    for(int i=0;i<n;i++){
        cin>>vec[i];
    }

    int target;
    cout<<"enter target yu want to search: ";
    cin>>target;

    int idx = 0;

    int ans = lastOccurence(vec,target,idx);
    cout<<"the last occurence for target is: "<<ans<<endl;

    return 0;


}