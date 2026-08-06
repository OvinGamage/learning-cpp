#include <iostream>
// An overloaded function is a function that has the same name but different parameters/inputs (either in number or type).
// In this example, we have two functions named BakePizza. One takes three parameters (size, topping, name) and the other takes no parameters.
void BakePizza(int size, std::string topping, std::string name);
void BakePizza();
int main(){
    BakePizza(12,"cheese","John");
    BakePizza(16,"pepperoni","Jane");
    BakePizza();

    return 0;
}
void BakePizza(int size, std::string topping, std::string name){
    std::cout<<"Baking a "<<size<<" inch pizza with "<<topping<<" for "<<name<<std::endl;
}
void BakePizza(){
    std::cout<<"Baking a default pizza"<<std::endl;
}