#include<iostream>
#include<cmath>
using namespace std;

int main(){

    // for(int num =1;num<=5;num++){
    //     cout<<num<<" ";
    // }

    //------print apna college 5 times---//---//

    // for(int i = 0;i<5;i++){  // i=0,1,2,3,4
    //     cout<<"apna college "<<endl;
    // }

    ///--------// print 1 to n--//

    // int n;
    // cout<<"enter value of n: ";
    // cin>>n;

    // for(int i=1;i<=n;i++){
    //     cout<<i<<" ";
    // }
    // cout<<endl;


    ///----------print sum of first n natural numbers----//

    // int n;
    // cout<<"enter value of n: ";
    // cin>>n;

    // int sum = 0;
    // for(int i=1;i<=n;i++){  // yu can also use formula like//--- s= n(n+1)/2--//
    //     sum+=i;
    // }
    // cout<<"sum up to "<<n<<" natural number is "<<sum<<endl;


    //---------while loop-----//

    // int count = 1;
    // int n;
    // cout<<"enter your n: ";
    // cin>>n;
    // int sum = 0;
    // while(count<=n){
    //     cout<<count<<" ";
    //     sum+=count;
    //     count ++;
    // }
    //  cout<<endl;
    // cout<<"sum = "<<sum<<endl;
    // cout<<endl;
    //return 0;
    

    // ///--------PRACTICE QUESTIONS------//

    //Q1.---square pattern---//

    // int n;
    // cout<<"enter value of n as for pattern: ";
    // cin>>n;

    // for(int i = 0;i<n;i++){
    //     for(int j=0;j<n;j++){
    //         cout<<" *";
    //     }
    //     cout<<endl;
    // }

    //Q2,//---print n to 1 using for loop-----//

    // int n;
    // cout<<"enter n: ";
    // cin>>n;

    // for(int i=n;i>=1;i--){
    //     cout<<i<<" ";

    // }
    // cout<<endl;

    //Q3.----sum of digits of numbers using wjile loop-----//

//     int n;
//     cout<<"enter a number: ";
//     cin>>n;
//     int temp = n;

//     int dig = 0,sum = 0,sum_odd = 0;
//     while(n!=0){
//         dig = n%10;
//         //for sum of odd digits---//
//         if((dig%2)!=0){
//             sum_odd += dig;
//         }
//         // above piece of code id fr sum of odd digits--//
//         sum+=dig;

//         n/=10;


//     }
//     cout<<"sum of digits of given number "<<temp<<" is "<<sum<<endl;
//   cout<<"sum of odd digits of given number "<<temp<<" is "<<sum_odd<<endl;

  ///-----print digits of given number and then print reverse of given number-------//


//   int n;
//   cout<<"enter a number : ";
//   cin>>n;
//   int temp = n;
//   int rev_num = 0;

//   int dig = 0;

//   while(n!=0){
//     dig = n % 10;
//     cout<<dig<<" ";
//     rev_num = rev_num *10 + dig;
//     n/=10;


//   }
//   cout<<endl;
//   cout<<"the reverse of "<<temp<<" is "<<rev_num<<endl;

//     return 0;


////--------------DO WHILE--------///       
 
// int n;
// cout<<"enter n:";
// cin>>n;
// int val = 1;

// do{
//     cout<< val<<" ";
//     val ++;
// }while(val<=n);
// cout<<endl;
// return 0;



// int i=1;
// while(i<=10){
    
//     if(i==3){
//         break;
//     }
//     cout<<i<<" ";
//     i++;
// }



//-----WAP to entering number till user nters multiple of 10-------//

// int num;


// do{
//     cout<<"enter number: ";
//     cin>>num;
//     if(num%10==0){
//         cout<<"program terminated";
//         break;
//     }
//     cout<<"yu entered "<<num<<endl;
// }while(1);

// cout<<endl;


///----- continue statement-------///

// int n;
// cout<<"enter n: ";
// cin>>n;

// for(int i=1;i<=n;i++){
//     if(i==3){
//         continue;
//     }
//     cout<<i<<" ";
// }
// cout<<endl;


///----practice -----//

// int num;

// do{
//     cout<<"enter number: ";
//     cin>>num;
//     if(num%10==0){
//         continue;
//     }
//     cout<<"yu entered "<<num<<endl;
// }while(1);

// cout<<endl;

///-----------prime or not-----//


//method-1---//
// int n;
// cout<<"enter a number: ";
// cin>>n;

// int div = 2;

// while(div<n){
//   if(n%div==0){
//     cout<<"not a prime number "<<endl;
//     return 0;
//   }
//   else{
//     div++;
//   }
// }
// cout<<"a prime number"<<endl;


//method-2---////

// int n;
// cout<<"enter a number: ";
// cin>>n;

// bool isprime = true;

// for(int i=2;i<n;i++){
//   if(n%i==0){
//     isprime = false;
//     break;
//   }
// }
// if(isprime){
//   cout<<"is a prime number"<<endl;
// }
// else{
//   cout<<"not a prime number"<<endl;
// }

///method-3//----optimised code---//

int n;
cout<<"enter a number: ";
cin>>n;

bool isPrime = true;

for(int i=2;i<=sqrt(n);i++){
  if(n%i==0){
    isPrime = false;
    break;
  }
}
if(isPrime){
  cout<<"is a prime number "<<endl;
}
else{
  cout<<"is not a prime number "<<endl;
}



return 0;
}