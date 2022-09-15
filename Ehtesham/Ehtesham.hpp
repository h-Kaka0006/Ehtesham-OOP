#ifndef _EHTESHAM_
#define _EHTESHAM_

#include<iostream>
#include<string>
#include<vector>
#include "Customer.hpp"
#include "FoodItem.hpp"
#include "Order.hpp"

class Ehtesham{
    private:
        std::vector< FoodItem* > menu;
        std::vector< Order* > orders;
        std::vector< Customer* > customers;
        static int count;
    
    public:
        void add_order(std::string food_name, Customer* customer);
        void add_customer(std::string name);
};

#endif