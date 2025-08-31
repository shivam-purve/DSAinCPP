#include<iostream>
#include<vector>
using namespace std;

int unique_sum(vector<int>nums,int val){
    int sum = 0;
    for(int i=0;i<nums.size();i++){
        sum+=nums[i];
    }
    return (sum-val);
}

vector<int> findTwiceAndMissing(vector<int>&nums){
    int n= nums.size();
    int freq[100000] = {0};
    for(int i=0;i<n;i++){
        freq[nums[i]]++;
    }
    vector<int>ans;
    for(int i=0;i<100000;i++){ //since it is fixed that only one and also atleast one element is twice appeared and one is missing
        if(freq[i]==2){
            ans.push_back(i);
            int missing = ((n*(n+1))/2)-(unique_sum(nums,i)); // dont go for nums[i+1]-1 cause error on array say 1 2 3 3
            ans.push_back(missing);
            return ans;

        }
    }
    return ans;
}

int main(){
    int n;
    cout<<"enter size of vector: ";
    cin>>n;

    vector<int>vec(n);

    for(int i=0;i<vec.size();i++){
        cin>>vec[i];
    }
    vector<int>ans =  findTwiceAndMissing(vec);
    for(int i=0;i<ans.size();i++){
        cout<<ans[i]<<" ";
    }
    return 0;
}