#include<iostream>
#include<string>
#include<vector>

using namespace std;

string operator*(int count, string str){
    string ans = "";
    while(count--)
        ans += str;
    return ans;
}

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
    void intro(){cout << firstname << endl;}
};

class Teacher: public Person {
    private:
        int workExprince;
        vector<string> courses;

    public:
        Teacher(string _firstName, string _lastName, int _age, int _id, int _workExprience):
        Person(_firstName, _lastName, _age, _id){
            workExprince = _workExprience;
        }
};

class Course {
    private:
        string name;
        string grade;
        vector< Teacher* > teachers;
        string description;

    public:
        Course(string _name, string _grade, string _description = "Not Defined!"){
            name = _name;
            grade = _grade;
            description = _description;
        }
        void add_description(string _description){description = _description;}

        void describe(){cout << "*** " << name << " ***" << endl <<
         description << endl << "*** " + operator*(name.size(), "*") + " ***" << endl;}

};

class school{
    private:
        string name;
        vector<Student*> students;
        vector<Teacher*> teachers;
    public:
        school(string _name){name = _name;}
        void intro(){
            cout << name << endl;
            for(int i=0;i<students.size();i++){
                student->intro();
                endl;
            }
        }



};





/*class MyInt {
    private:
        int value;
    
    public:
        string operator*(string str){
            string ans = "";
            int val = value;
            while(val--)
                ans += str;
            return ans;
        }
        MyInt(int _value){value = _value;}
};*/

int main(){

    Student* student = new Student("Hasan", "KKNJ", 17, 0023, "11th");
    Course* course = new Course("math", "11th");
    course->describe();
    course->add_description("this is the most valuable course in school!");
    course->describe();
    /*int n;
    cin >> n;
    MyInt a(n);
    cout << a * "hasan" << endl;*/
    school -> intro();
    return 0;
}
