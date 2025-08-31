#include<iostream>
#include<string>
using namespace std;

class Person {
    public:
    string name;
    int age;
};

class Student: public Person {
    public:
    string studentID;

    Student(string name,int age,string studentID){
        this->name = name;
        this->age = age;
        this->studentID = studentID;

    }

    void displayStudentInfo(Student &s1){
        cout<<"student name is "<<s1.name<<endl;
        cout<<"student age is "<<s1.age<<endl;
        cout<<"student ID is "<<s1.studentID<<endl;
    }


};

int main(){


    Student s1("shivam purve", 19,"cs24b055");
    s1.displayStudentInfo(s1);

    return 0;

}