#include<iostream>
#include<algorithm>
#include<limits>
using namespace std;




///------method-1---//  T.C = o(N^2)

// int maxprofit(int *arr,int n){
    
//      int buy_time,sell_time;
//      int maxprofit = 0,currprofit=0;
//     for(int i=0;i<n;i++){
//         for(int j=i+1;j<n;j++){
//              currprofit = arr[j]-arr[i];
//             if(currprofit>maxprofit){
//                 maxprofit = arr[j]-arr[i];
//                 buy_time=i+1;
//                 sell_time=j+1;

//             }
//         }

//     }
//     if(maxprofit!=0){
//         cout<<"maxprofit for buy and sell stock is "<<maxprofit<<" and "<<"best time to buy the stock is "<<buy_time<<"th day and best time to sell the stock is "<<sell_time<<"th day"<<endl;
//     }
//     else{
//         cout<<"0";
//     }

// }

// int main(){
//     int n;
//     cout<<"enter all number of the stock prices:";
//     cin>>n;
//     int arr[n];
//     cout<<"enter stock prices in array form: "<<endl;
//     for(int i=0;i<n;i++){
//         cin>>arr[i];
//     }
//      maxprofit(arr,n);
//    return 0;
// }



///--------method-2-----/ T.C = o(N)

void maxprofit(int *prices,int n){
    int bestbuy[100000]; // as we cant put directly n as dynamic syzing in array is not possible in function so we took extreme sizing a/c to leecode
    bestbuy[0] = INT_MAX;
    for(int i=1;i<n;i++){
        bestbuy[i] = min(bestbuy[i-1],prices[i-1]);
    }
    int maxprofit = 0;
    for(int i=0;i<n;i++){
        maxprofit=max(maxprofit,(prices[i]-bestbuy[i]));
        

    }
    cout<<"maxprofit = "<<maxprofit<<endl;
}

int main(){
    int n;
    cout<<"enter number of stock: ";
    cin>>n;
    int prices[n];

    for(int i=0;i<n;i++){
        cin>>prices[i];

    }
    maxprofit(prices,n);
    return 0;
}


