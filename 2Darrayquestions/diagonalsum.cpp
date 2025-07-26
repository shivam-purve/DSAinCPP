#include<iostream>
using namespace std;
/// this approach goes to time complexity of O(n^2)
// void diagonalsum1(int arr[][4],int n){
//     int diagonal_sum = 0;
//     for(int i=0;i<n;i++){
//         for(int j=0;j<n;j++){
//             if(i+j==(n-1)||i==j){
//                 diagonal_sum+=arr[i][j];
//             }

//         }
//     }
    
//         cout<<"the diagonal sum for matrix is: "<<diagonal_sum<<endl;
  
       
// }


// this approach goes to time complexity 0f O(n)


void diagonalsum2(int arr[][3],int n){
    int p_sum=0,s_sum = 0,diag_sum = 0;///  p_sum = primary diagonal sum  and s_sum = secondary diagonal sum
   // p_sum..//
    for(int i=0;i<n;i++){
        p_sum+=arr[i][i];
    }
    // s_sum..//
    for(int i=0;i<n;i++){
        s_sum+=arr[i][n-1-i];
    }
    if(n%2==0){
        diag_sum = p_sum + s_sum;
    }
    else{
        diag_sum = p_sum + s_sum - arr[n/2][n/2];
    }

    cout<<"the diagonal sum for matrix is: "<<diag_sum<<endl;
}



int main(){
    int n = 3;
    int arr[3][3];
    cout<<"enter array elemnts: "<<endl; // row and column would be same as it is a square matrix
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            cin>>arr[i][j];
        }
    }
    diagonalsum2(arr,n);
    return 0;
}