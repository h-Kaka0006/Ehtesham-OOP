#include<iostream>
#include<string>
#include<vector>
#include "Customer.hpp"

using namespace std;

Customer::Customer(string _id, string _name, Ehtesham* origin){
    id = _id;
    name = _name;
    wallet = 0;
    ehtesham = origin;
}

void Customer::order(string food_name){
        ehtesham->add_order(food_name, this);    
}