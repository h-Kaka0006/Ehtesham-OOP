#include<iostream>
#include<string>
#include<vector>

using namespace std;

class Person {
    private:
        string firstName;
        string lastName;
        int age;
        int id;
    
    public:
        Person(string _firstName, string _lastName, int _age, int _id){
            firstName = _firstName;
            lastName = _lastName;
            age = _age;
            id = _id;
        }
        void intro(){
            cout << "firstName: " << firstName << endl;
            cout << "lastName: " << lastName << endl;
        }
};

class Student: public Person {
    private:
        int gpa;
        string grade;
    public:
        Student(string _firstName, string _lastName, int _age, int _id, string _grade):
        Person(_firstName, _lastName, _age, _id) {
            gpa = 0;
            grade = _grade;
        }
};




int main(){

    Student* student = new Student("Hasan", "KKNJ", 17, 0023, "11th");
    student->intro();
    return 0;
}