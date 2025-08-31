#include<iostream>
#include<string>
using namespace std;

class User {

    private:

    int id;
    string password;

    public:

    string username;

    User(int id) { //constructor (parametrised)
        this->id = id;

    }

    //getters and setters

    void setPassword(string password){
        this->password = password;
    }

    string getPassword(){
        return password;
    }

};

int main(){

    User u1(640); //creating object with id as parameter
    u1.username = "shivamraaz640";
    u1.setPassword("shivam@123");
    // user id is private accessible to cant accessible in main
    cout<<"username = "<<u1.username<<endl;
    cout<<"password = "<<u1.getPassword()<<endl;
    return 0; 

}