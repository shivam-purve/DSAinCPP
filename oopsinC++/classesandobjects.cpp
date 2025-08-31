#include<iostream>
#include<string>
using namespace std;

class Student {  //define class

    // default they all are privately declared
private:
    string name; // properties
    float cgpa;

public:

    void getPercentage(){ //member functions
        cout<<(cgpa*10)<<endl;
    }

    // setters-----//

    void setName(string newName){
        name = newName;
    }

    void setCgpa(float newCgpa){
        cgpa = newCgpa;
    }

    //getters

     string getName( ){
        return name ;
    }

    float getCgpa( ){
        return cgpa;
    }



};

class User {

    private:

    int id;
    string username;
    string password;
    string bio;

    public:

    void deactivate(){
        cout<<"deleting account\n";
    }

    void editBio(string newBio){
        bio = newBio;
    }

};

int main(){


    Student s1; //s1 is object of class Student
    //  cout<<sizeof(s1);

     //you can only use these operations if all data and properties are publically defined 

    //  s1.name = "shivam purve";

    //  cout<<s1.name<<endl;
    //  s1.cgpa = 9.17;

    //  cout<<s1.cgpa<<endl;
    //  s1.getPercentage();

    //getters and setters-----//

    //-----since name and cgpa are private accessible among them so we can use getters and setters

    s1.setName("shivam purve");
    s1.setCgpa(9.17);

    cout<< s1.getName()<<endl;
    cout<< s1.getCgpa()<<endl;










     User u1,u2; // creating multiple users (objects) based on User class
     return 0;




}