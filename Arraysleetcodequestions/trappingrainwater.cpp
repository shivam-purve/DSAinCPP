#include<iostream>
using namespace std;

void traiprainwater(int *height,int n){
    int leftmax[20000];
    leftmax[0]=height[0]; // we will initialise it with height[0] for preventing from -infinity-some number = positive due to bit manupulation
    for(int i=1;i<n;i++){
        leftmax[i]=max(leftmax[i-1],height[i-1]);
    }

    int rightmax[20000];
    rightmax[n-1]=height[n-1];  //we will initialise it with height[n-1] -some number = positive due to bit manupulation
    for(int i=n-2;i>=0;i--){
        rightmax[i]=max(rightmax[i+1],height[i+1]);
    }

    int traip_water ,total_traip_water = 0;
    for(int i=0;i<n;i++){
        int actual_height = min(rightmax[i],leftmax[i]);
    
        traip_water = (actual_height -height[i]); // as width = 1
        if(traip_water>0){
            total_traip_water += traip_water;
        }
    }
    cout<<"total traiprainwater is "<<total_traip_water<<endl;

}

int main(){

    int n;
    cout<<"enter number of containers: ";
    cin>>n;

    int height[n];
    for(int i=0;i<n;i++){
        cin>>height[i];
    }
    traiprainwater(height,n);
}