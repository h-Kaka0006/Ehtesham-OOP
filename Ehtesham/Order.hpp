#ifndef _ORDER_
#define _ORDER_

#include<iostream>
#include<string>
#include<vector>
#include "FoodItem.hpp"
#include "Customer.hpp"

class Order{
    private:
        std::vector< Customer* > customers;
        std::vector< Food* > Items;
};

#endif