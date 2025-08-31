#include<iostream>
#include<string>
using namespace std;

class Example {
    public:
    Example(){
        cout<<"constructor..\n";
    }

    ~Example(){
        cout<<"destructor..\n";
    }
};

int main(){
    int a = 0;
    if(a==0){
       static Example eg1;
    }

    cout<<"ending program..\n";// till we dont define static keyword the objectof class will delete after coming to constructor
    // but when we give static keyword behind it the object access will be lifetime throughou the programe

    return 0;
    
}