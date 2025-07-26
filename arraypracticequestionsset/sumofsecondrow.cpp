#include<iostream>
using namespace std;


void sumrow(int arr[][3],int n,int m,int row){
    int i = row-1,sum = 0; // row-1 as row  = 2 means index = row-1
    for(int j=0;j<m;j++){
        sum+=arr[i][j];

    }
    cout<<"the sum of "<<i<<"nd row elements is "<<sum<<endl;
}


int main(){
    int n;
    cout<<"enter number of rows: "<<endl;
    cin>>n;
   const int m=3;
    cout<<"the column number is fixed to 3."<<"\n";
     int arr[n][m];
    cout<<"enter the array elements for "<<n<<" x "<<3<<" matrix "<<endl;

    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            cin>>arr[i][j];
        }
    }
    int row;
    cout<<"enter row number whose sum in matrix yu want: "<<endl;
    cin>>row;
    sumrow(arr,n,m,row);
    return 0;
}