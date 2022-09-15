#include<iostream>
#include<string>
#include<vector>
#include "Ehtesham.hpp"

using namespace std;

int Ehtesham::count = 0;

void Ehtesham::add_customer(string name){
    string  id = name[0] + to_string(count++);
    customers.push_back(new Customer(id, name, this));
}