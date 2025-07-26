#include<iostream>
#include<limits>
#include<algorithm>
using namespace std;

int main(){
    int n;
    cout<<"enter number of elements: ";
    cin>>n;

    int nums[n];
    for(int i=0;i<n;i++){
        cin>>nums[i];
    }
   ////-- inbuilt sort----//
   // yu can aslo sort desirely if yu want let say sorted array from 2 index to 5 th index then give  //sort(nums+2,nums+5)////
  
   sort(nums,nums+n); 


    cout<<"after inbuilt sort array in assending order is :"<<endl;

    for(int i=0;i<n;i++){
        cout<<nums[i]<<" ";
    }

    cout<<endl;
    sort(nums,nums+n,greater<int>()); //for dessending order..//


    cout<<"after inbuilt sort array in dessending order is :"<<endl;

    for(int i=0;i<n;i++){
        cout<<nums[i]<<" ";
    }

    return 0;


}