#include<iostream>
#include<vector>
#include<algorithm>
#include<cstring>
#include<limits>
using namespace std;

vector<vector<int>> threesum(vector<int>nums){
    int n = nums.size();
    vector<vector<int>> res;
    sort(nums.begin(),nums.end());
    for(int i=0;i<n-2;i++){
        //check duplicacy of nums
        if(i>0&&nums[i]==nums[i-1]) continue;

        int left = i+1,right = n-1;
        while(left<right){
            int sum = nums[i] + nums[left] + nums[right];
            if(sum==0){
                res.push_back({nums[i],nums[left],nums[right]});
                //check duplicacy of left and right nums element
                while(left<right&&nums[left]==nums[left+1]) left++;
                while(left<right&&nums[right]==nums[right-1]) right--;
                //this update is for checking from next pointer
                left++,right--;

            }
            else if(sum>0){
                right--;
            }
            else{
                left++;
            }
        }
    }
    return ans;

}

int main(){
    vector<int>nums;
    int n;
    cout<<"enter number of elements: ";
    cin>>n;
    nums.resize(n); //giving dynamic sizing

    cout<<"enter array elements: "<<endl;
    for(int i=0;i<n;i++){
        cin>>nums[i];
    }


    vector<vector<int>> ans = threesum(nums);
    cout<<"triplets that sum to zero:\n";

    for(auto triplet:ans){
        for(int x:triplet){
            cout<<x<<" ";
        }
        cout<<"\n";
    }

    return 0;

}