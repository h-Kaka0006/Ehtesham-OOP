#include<iostream>
#include<string>
#include<vector>
#include "FoodItem.hpp"

using namespace std;

int FoodItem::ID_count = 1;

FoodItem::FoodItem(Food* _food, int _amount){
    food = _food;
    amount = _amount;
    ID = ID_count++;
}