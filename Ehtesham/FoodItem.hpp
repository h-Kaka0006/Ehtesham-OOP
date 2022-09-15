#ifndef _FOOD_ITEM_
#define _FOOD_ITEM_

#include<iostream>
#include<string>

class Food{
    private:
        std::string name;
        int price;
        std::string info;
    
    public:
        Food(std::string _name, int _price, std::string _info);
        
};

class FoodItem{
    private:
        Food* food;
        int amount;
        int ID;
        static int ID_count;

    public:
        FoodItem(Food* _food, int _amount);
};

#endif