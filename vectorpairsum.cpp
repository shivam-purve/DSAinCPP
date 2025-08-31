#include<iostream>
#include<vector>
using namespace std;

vector<int> pairSum(vector<int> &vec,int target){
    int st = 0,end = (vec.size()-1);
    vector<int>indices;

    // T.C = O(n)

    while(st<end){
        if((vec[st]+vec[end])==target){
            indices.push_back(st);
            indices.push_back(end);
            return indices;
        }
        else if((vec[st]+vec[end])<target){
            st++;
        }
        else{
            end--;
        }
    }
   
}

int main(){
    int n;
    cout<<"enter number of elements: ";
    cin>>n;

    vector<int> vec(n);
    for(int i=0;i<n;i++){
        cin>>vec[i];
    }
    int target;
    cout<<"enter your target you want to find: ";
    cin>>target;
    vector<int>index = pairSum(vec,target);
    cout<<"pair of indices whose sum up gives us desired target: "<<endl;

    for(int i=0;i<index.size();i++){
        cout<<index[i]<<" ";
    }
    return 0;
    
}



        
    

