#include<iostream>
#include<algorithm>
#include<vector>

using namespace std;



int xorBeauty(vector<int>& nums) {
        int ans = nums[0];
        for(int i=1;i<nums.size();i++){
            ans ^= nums[i];
        }
        return ans;
        
    }

int main(){
    int n;
    cout<<"enter number of elemnts: ";
    cin>>n;

    vector<int>vec(n);

    for(int i=0;i<n;i++){
        cin>>vec[i];
    }

    int ans = xorBeauty(vec);

    cout<<"the xor beauty of array is: "<<ans<<endl;
    return 0;








};