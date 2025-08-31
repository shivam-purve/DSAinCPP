#include<iostream>
#include<vector>
using namespace std;

int tilingProblem(int n){
    if(n==0 || n==1){
        return 1; //for floor 2 x 0  or 2 x 1 ...the numbe of ways is 1.


    }

    return tailingProblem(n-1) + tailingProblem(n-2); // tailingProblem(n-1)  for vertical allignment  and tailingProblem(n-2 ) for horizontal allignment
    


}

int main(){

    int n;
    cout<<"enter size of floor as (2 x n) so n: ";
    cin>>n;

   int ans =  tailingProblem(n);

   cout<<"total numbe of ways is: "<<ans<<endl;

   return 0;
}