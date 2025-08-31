#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

int maxArea(vector<int>height){ 
    int st = 0,end = height.size()-1;
    int curr_water = 0,max_water = 0;
    while(st<end){
        int curr_water = min(height[st],height[end])*(end-st);
        max_water = max(max_water,curr_water);
        if(height[st]>height[end]){
            end--;

        }
        else{
            st++;
        }

    }
    return max_water;
        



}





int maxWater(vector<int>height){
    int n= height.size();
    // lets find left max and right max for each index i.e each vertical line and then water will be trapped because of min(left_max,right_max) and then we will find trap water for every line
    int max_water = 0;
    for(int i=0;i<n;i++){
        for(int j=i+1;j<n;j++){
            int len = min(height[i],height[j]);
            int width = j-i;
            int curr_water = width*len;
            max_water = max(curr_water,max_water);
        }
    }
    return max_water;
}


int main(){
    int n;
    cout<<"enter number of vertical heights: ";
    cin>>n;

    vector<int>height(n);
    for(int i=0;i<n;i++){
        cin>>height[i];
    }

    ///-----method-1///

//    int maxwater =  maxWater(height);
//    cout<<"the maxwater can be stored is: "<<maxwater<<endl;

    // 2nd Method
    int maxwater = maxArea(height);
    cout<<"the maximum water can e stored is: "<<maxwater<<endl;

    return 0;
}