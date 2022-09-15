#include<iostream>
#include<string>
#include<vector>

using namespace std;

class Person{
    private:
        string name;
        int age;
    public:
        Person(string _name, int _age){
            name = _name;
            age = _age;
        }
        void introduce(){
            cout << name << " " << age << endl;
        }
};

int main(){

    Person* hasan = new Person("Hasan", 17);
    hasan->introduce();
    return 0;
}