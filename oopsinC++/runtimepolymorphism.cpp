#include<iostream>
#include<string>
using namespace std;

class Parent {
    public:

    void show(){
        cout<<"parent class show..\n";
    }
    //virtual functions
    virtual void hello(){
        cout<<"parent hello\n";
    }
};

class Child:public Parent {
    public:

    void show(){
        cout<<"child class show...\n";
    }
    void hello(){
        cout<<"child hello\n";
    }


};

int main(){
    Child c1;

    //function overidding
    // c1.show();

    //virtual functions

    Parent *ptr;
    ptr = &c1; //runtime binding
    ptr->hello(); //virtual functions



    
    return 0;
}