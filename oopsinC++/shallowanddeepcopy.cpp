#include<iostream>
#include<string>
using namespace std;

class Car {
    public:

    string name;
    string color;
    int *milege;

    Car(string name , string color) { //constructor
        this->name = name;
        this->color =  color;
        milege = new int;
        *milege = 12;

    }

     //custom copy constructor
    Car (Car &original){
        cout<<"copying original to new...\n";
        name = original.name;
        color = original.color;
        // milege = original.milege; // but this way the milege pointer is just pointing to same address as original milege pointer had it in heap memory 
        // so it can cause problem when we want to just change milege of c1 it will automatically change to c2 also and vice-versa this is due to shallow copy

        milege = new int; //now it will allocate new memory to heap then define value as original //------
        // this is called deep copy---//
        *milege = *original.milege;

    }

    ~Car() {  //destructor  creation
        cout<<"deleting object....\n";
        if(milege != NULL){
            delete milege;
            milege = NULL;
        }

    }





};

int main(){
    Car c1("maruti 800" , "white");

    Car c2(c1); /// yu can see in c2 object whole c1 object is argument so it will by default call copy constructor

    cout<<"c2 car name = "<<c2.name<<endl;
    cout<<" c2 car color = "<<c2.color<<endl;
    cout<<"c2 car milege = "<<*(c2.milege)<<endl;

    *c2.milege = 10;
    // cout<<" c1 car milege in shallow(in default when our custom constructor not defined) copy = "<<*c1.milege<<endl; //yu will see in output c1 milege also gets changes to 10 as it was shallow copy

    //after deep copy by making own custom cunstructo
    cout<<" c2 car milege = "<<*c2.milege<<endl;

    cout<<"c1 car milege = "<<*c1.milege<<endl;
    return 0;
}