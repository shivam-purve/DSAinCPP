#include<iostream>
#include<vector>
#include<algorithm>

using namespace std;
int clearIthBit(int num,int i){
     int bitmask = ~(1<<i);
     int ans = (num & bitmask);
     return ans;
}


//----method-1 ---//(not recomended)
bool checkPowerOfTwo(int num){
    int i=1;
    while(i*i<=(num)){
        if((clearIthBit(num,i))==0){
            return true;
        }
      
        i++;
    }
    return false;
}

//----method-2 ---//(recomended)
bool isPowerOf2(int num){
    if(!(num&(num-1))){
        return true;
    }
    else{
        return false;
    }
}

int getIthBit(int num,int i){
    int bitMask = 1 << i;
    if(!(num & bitMask)){
        return 0;
    }
    else{
        return 1;
    }
}


int setIthBit(int num,int i){

    int bitmask = 1<<i;
     int res = (num|bitmask);

     return res;
}



void checkoddoreven(int num){
     if(!(num&1)){
        cout<<"a even number"<<endl;

    }
    else{
        cout<<"a odd number"<<endl;
    }

}

int main(){

    //----BITWISE AND OPERATORS---//

    // int a,b;
    // cout<<"enter first number: ";
    // cin>>a;
    // cout<<"enter second number:";
    // cin>>b;

    // int bit_man = a&b;
    // cout<<bit_man;

    ///---bitwise or operator---//

    // int a,b;
    // cout<<"enter first number: ";
    // cin>>a;
    // cout<<"enter second number:";
    // cin>>b;

    // int bit_man = a|b;
    // cout<<bit_man;

    //--bitwise xor operator---//

    //  int a,b;
    // cout<<"enter first number: ";
    // cin>>a;
    // cout<<"enter second number:";
    // cin>>b;

    // int bit_man = a^b;
    // cout<<bit_man;

    ///-----one's complement-----//

    // int a;
    // cout<<"enter any number: ";
    // cin>>a;

    // int res = ~a; // ones complement of a(see the get exact decimal number in copy detalied explaination)

    // cout<<res<<endl;


    ///-----BITWISE LEFTSHIFT OPERATOR---//

    // cout<<(7<<2)<<endl;

    // cout<<(7>>2)<<endl;

    ///--------check if odd or even----//

    int num;
    cout<<"enter any number: ";
    cin>>num;

   // checkoddoreven(num);


       //-----GETING ITH BIT IN BINARY FORM OF A NUMBER-----//



//    int i;
//    cout<<"enter bit number yu want to get:";
//    cin>>i;


//   int res = getIthBit(num,i);
//   cout<<"the "<<i<<"th bit of "<<num<<" in binary form is "<<res<<endl;


           //--------set ITh Bit----//


//     int i;
//    cout<<"enter bit number yu want to set:";
//    cin>>i;

//    int res = setIthBit(num,i);
// cout<<"the number afetr setting the bit at given index is "<<res<<endl;



     //---CLEAR ITH BIT-----//

    // int i;
    //  cout<<"enter bit number yu want to set:";
    //   cin>>i;

    //  int res = clearIthBit(num,i);
    //  cout<<"the number afetr clearing the bit at given index is "<<res<<endl;

    //-----check power of 2 or not---//

    //------method-1-----//
    

    // if(checkPowerOfTwo(num)){
    //     cout<<"is a power of 2"<<endl;
    // }
    // else{
    //     cout<<"not a power of 2"<<endl;
    // }

    //----method-1---best//

    if(isPowerOf2(num)){
        cout<<"is a power of 2"<<endl;
    }
    else{
        cout<<"not a power of 2"<<endl;
    }




    return 0;
}