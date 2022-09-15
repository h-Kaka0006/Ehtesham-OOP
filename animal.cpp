#include"animal.hpp"
#include<iostream>
#include<string>

using namespace std;

Animal::Animal(string _color, string _living_place){
    color = _color;
    living_place = _living_place;
}

Animal::Animal(){
    color = "unknown";
    living_place = "unknown";
}

void Animal::introduce(){
    cout << "I am an animal with " << color << " color and I live in " 
    << living_place << endl;
}