#include<iostream>
using namespace std;

void rotate(int arr[][3],int n){
    //code for inplace transpose
    for(int i=0;i<n;i++){
        for(int j=0;j<=i;j++){
            int temp = arr[i][j];
            arr[i][j]=arr[j][i];
            arr[j][i] = temp;
        }
    }
    int scol = 0,ecol=n-1;
    while(scol<=ecol){
        for(int i=0;i<n;i++){
            swap(arr[i][scol],arr[i][ecol]);
        }
        scol++;
        ecol--;
    }

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
   rotate(arr,n);

   cout<<"the rotated array is :"<<endl;

   for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            cout<<arr[i][j]<<" ";
        }
        cout<<endl;
    }

    return 0;
}
