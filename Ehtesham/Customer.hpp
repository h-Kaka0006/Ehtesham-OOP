#ifndef _CUSTOMER_
#define _CUSTOMER_

#include<iostream>
#include<string>
#include<vector>
#include "Order.hpp"
#include "Ehtesham.hpp"

class Customer{
    private:
        std::string id;
        std::string name;
        int wallet;
        Ehtesham* ehtesham;
        std::vector< Order* > prev_orders;
    
    public:
        Customer(std::string _id, std::string _name, Ehtesham* origin);
        void order(std::string food_name);
};

#endif