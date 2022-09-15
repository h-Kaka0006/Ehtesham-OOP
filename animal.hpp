#include<string>

class Animal{
    private:
        std::string color;
        std::string living_place;
    
    public:
        Animal();
        Animal(std::string _color, std::string _living_place);
        void introduce();
        virtual void bark();
};