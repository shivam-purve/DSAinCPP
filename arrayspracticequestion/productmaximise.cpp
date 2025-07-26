#include<iostream>
#include<limits>
using namespace std;


void largestproduct(int *nums,int n ){
    int largest_prod = INT_MIN;
    for(int st = 0;st<n;st++){
          int curr_prod = 1;
        for(int end = st;end<n;end++){
            curr_prod *= nums[end];
            largest_prod = max(largest_prod,curr_prod);
        }
    }
    cout<<"largest product is :"<<largest_prod;
}
int main(){
    int n;
    cout<<"enter n:";
    cin>>n;

    int nums[n];
    for(int i=0;i<n;i++){
        cin>>nums[i];
    }
    largestproduct(nums,n);
    return 0;
}