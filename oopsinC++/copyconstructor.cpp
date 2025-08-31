#include<iostream>
#include<string>
using namespace std;

class Car {
    public:

    string name;
    string color;

    Car(string name , string color) { //constructor
        this->name = name;
        this->color =  color;

    }

     //custom copy constructor
    Car (Car &original){
        cout<<"copying original to new...\n";
        name = original.name;
        color = original.color;
    }





};

int main(){
    Car c1("maruti 800" , "white");

    Car c2(c1); /// yu can see in c2 object whole c1 object is argument so it will by default call copy constructor

    cout<<"c2 car name = "<<c2.name<<endl;
    cout<<" c2 car color = "<<c2.color<<endl;
    return 0;
}