#include<iostream>
#include<string>
using namespace std;

class Example {
    public:

    // static const  int x = 0; //for initialising at same time
    static int x;
};
//used scope for defining x

int Example::x = 0; //define out the class as if yu want to initilase at same time yu will have to define it outside the class




void counter(){
    static int count = 0; //initialised once in a whole program and then previous value used as new initialesd value
    count++;
    cout<<"count = "<<count<<endl;
}

int main(){
    // counter();
    // counter();
    // counter();

    Example eg1;
     Example eg2;
      Example eg3;
      // all values will be same i.e zero for now as static keyword isnt used

    //   cout<<eg1.x++<<endl;
    //   cout<<eg2.x++<<endl;
    //   cout<<eg3.x++<<endl;

       // all values will be different  for now as static keyword is used

     cout<<eg1.x++ <<endl;
      cout<<eg2.x++ <<endl;
      cout<<eg3.x++ <<endl;


    return 0;
}