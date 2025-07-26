#include<iostream>
using namespace std;

int main(){
    // int n;
    // cout<<"enter a number:-";
    // cin>>n;

    // for(int i=1;i<=n;i++){  // during class n was taken as  n=4
    //     for(int j=1;j<=n;j++){
    //         cout<<i<<" ";

    //     }
    //     cout<<endl;
    // }


    ///--------STAR PATTERN-----///

    // int n;
    // cout<<"enter a number:-";
    // cin>>n;

    // for(int i=1;i<=n;i++){  // during class n was taken as  n=4
    //     for(int j=1;j<=i;j++){
    //         cout<<"*"<<" ";

    //     }
    //     cout<<endl;
    // }
    // cout<<endl;

    ///--------------INVERTED STAR PATTERN-----------///

    // int n;
    // cout<<"enter value of n: ";
    // cin>>n;

    // for(int i=1;i<=n;i++){
    //     for(int j=1;j<=n-i+1;j++){
    //         cout<<"* ";
    //     }
    //     cout<<endl;
    // }
    // cout<<endl;


    ///----------Half pyramid of numbers-----///

    // int n;
    // cout<<"enter a number: ";
    // cin>>n;

    // for(int i=1;i<=n;i++){
    //     for(int j=1;j<=i;j++){
    //         cout<<j<<" ";
    //     }
    //     cout<<endl;

    // }
    // cout<<endl;


    ///----------character pyramid pattern-----//

    // int n;
    // cout<<"enter a number: ";
    // cin>>n;
    //  char ch = 'A';
    

    // for(int i=1;i<=n;i++){  //try to keep n<=6 to print only alphabet
    //     for(int j=1;j<=i;j++){
            
    //          cout<<ch++<<" ";
             
    //     }
    //     cout<<endl;
    // }
    // cout<<endl;


    ///---------print hollow rectangle----//
   /// method - 1


    // int n;
    // cout<<"enter value of n: ";
    // cin>>n;

    // for(int i=1;i<=n;i++){
    //     for(int j=1;j<=n+1;j++){
    //         if((i==1||i==n)||(j==1||j==(n+1))){
    //             cout<<"*";
    //         }
    //         else{
    //             cout<<" ";
    //         }
    //     }
    //     cout<<endl;
    // }
    // cout<<endl;

    //---method-2

    // int n;
    // cout<<"enter value of n: ";
    // cin>>n;

    // for(int i=1;i<=n;i++){
    //     cout<<"*";
    //     for(int j=1;j<=(n-1);j++){
    //         if(i==1||i==n){
    //             cout<<"*";
    //         }
    //         else{
    //             cout<<" ";
    //         }
    //     }
    //     cout<<"*";
    //     cout<<endl;
    // }
    // cout<<endl;


    ///-----INVERTED AND ROTATED HALF PYRAMID------//

    // int n;
    // cout<<"enter value of n: ";
    // cin>>n;

    // for(int i=1;i<=n;i++){
    //     for(int j=1;j<=n-i;j++){
    //         cout<<" ";
    //     }
    //     for(int j=1;j<=i;j++){
    //         cout<<"*";
    //     }
    //     cout<<endl;
    // }
    // cout<<endl;

    // int n;
    // cout<<"enter value of n: ";
    // cin>>n;
    // int a = 1;

    // for(int i=1;i<=n;i++){
    //     for(int j=1;j<=i;j++){
    //         cout<<a<<" ";
    //         a++;
    //     }
    //     cout<<endl;
    // }

    ///----DIAMOND PATTERN------//

    // int n;
    // cout<<"enter a number: ";
    // cin>>n;

    // for(int i=1;i<=n;i++){
    //     for(int j=1;j<=(n-i);j++){
    //         cout<<" ";
    //     }
    //     for(int j=1;j<=(2*i-1);j++){
    //         cout<<"*";
    //     }
    //     cout<<endl;
    // }
    // for(int i=1;i<=n;i++){
    //     for(int j=1;j<=(i-1);j++){
    //         cout<<" ";
    //     }
    //     for(int j=1;j<=(2*n-2*i+1);j++){
    //         cout<<"*";
    //     }
    //     cout<<endl;

    // }
    // cout<<endl;


    ///------butterfly pattern-----///


    int n;
    cout<<"enter a number: ";
    cin>>n;

    for(int i=1;i<=n;i++){
        for(int j=1;j<=i;j++){
            cout<<"*";
        }
        for(int j=1;j<=(2*n-2*i);j++){
            cout<<" ";
        }
        for(int j=1;j<=i;j++){
            cout<<"*";
        }
        cout<<endl;

    }
    for(int i=1;i<=n;i++){
        for(int j=1;j<=n-i+1;j++){
            cout<<"*";
        }
        for(int j=1;j<=2*(i-1);j++){
            cout<<" ";
        }
        for(int j=0;j<n-i+1;j++){
            cout<<"*";
        }
        cout<<endl;
    }
    cout<<endl;

    return 0;
}