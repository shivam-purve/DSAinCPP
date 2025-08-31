#include<iostream>
#include<string>
using namespace std;

class Print {
    public:

    void show(int x){ //function overloading
        cout<<"int: "<<x<<endl;
    }

    void show(string str){
        cout<<"string:   "<<str<<endl;
    }


};

int main(){
    Print obj1;
    obj1.show(25);
     obj1.show("apna college");

     return 0;

}