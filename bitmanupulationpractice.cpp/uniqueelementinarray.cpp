#include<iostream>
#include<algorithm>
#include<vector>

using namespace std;

void findSingleElement(vector<int>&vec){
    int unique_ele = vec[0];
    for(int i=1;i<vec.size();i++){
        unique_ele = unique_ele^vec[i];
    }

    cout<<"single element in given array is: "<<unique_ele<<endl;

}

int main(){
    int n;
    cout<<"enter any number: ";
    cin>>n;

    vector<int>vec(n);

    for(int i=0;i<n;i++){
        cin>>vec[i];
    }

    findSingleElement(vec);
    return 0;
}