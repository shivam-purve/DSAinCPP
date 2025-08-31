#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

int inversionCount(int arr[],int n){
    int count = 0;
    for(int i=0;i<n;i++){
        int num = arr[i];
        for(int j=i+1;j<n;j++){
            if(arr[j]<num){
                count++;
            }

        }
    }

    return count;
}

int main(){
    int n;
    cout<<"enter size of an array: ";
    cin>>n;

    int arr[n];
    cout<<"enter eleemnts of an array: ";
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }

    int res = inversionCount(arr,n);
    cout<<"inversion count is: "<<res<<endl;

    return 0;

}