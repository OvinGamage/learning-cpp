#include <iostream>
#include <string>

class pizza{
    public:
    std::string size;
    std::string crust;
    std::string topping1;
    std::string topping2;
    std::string topping3;
    pizza(std::string s, std::string c, std::string t1, std::string t2, std::string t3){
        size=s;
        crust=c;
        topping1=t1;
        topping2=t2;
        topping3=t3;
        std::cout<<"Your pizza is ready! It is a "<<size<<" pizza with "<<crust<<" crust and the following toppings: "<<topping1<<", "<<topping2<<", and "<<topping3<<"."<<std::endl;}
    pizza(std::string s, std::string c){
        size=s;
        crust=c;
        std::cout<<"Your pizza is ready! It is a "<<size<<" pizza with "<<crust<<" crust and no toppings."<<std::endl;
    }
    pizza(std::string t1, std::string t2, std::string t3){
        size="Medium";
        crust="Thin Crust";
        topping1=t1;
        topping2=t2;
        topping3=t3;
        std::cout<<"Your pizza is ready! It is a "<<size<<" pizza with "<<crust<<" crust and the following toppings: "<<topping1<<", "<<topping2<<", and "<<topping3<<"."<<std::endl;

    }
};

int main(){
    //overloading constructors is a feature in C++ that allows a class to have multiple constructors with different parameter lists.
    //This allows objects of the class to be initialized in different ways, depending on the arguments passed to the constructor.
    pizza OvinsPizza("Large", "Stuffed Crust", "Pepperoni", "Extra Cheese", "Bacon");
    pizza SpongebobsPizza("Medium", "Thin Crust");
    pizza PatrickPizza("Pepperoni", "Mushrooms", "Onions");
    pizza SquidwardsPizza("Small", "Deep Dish", "Sausage", "Green Peppers", "Olives");
    //If you're wondering how the program would handle a pizza with just 1 topping,YOu can create a new constructor that takes in just one topping as an argument.
    //But it's much more efficient to use default arguments for the toppings, so that you can create a pizza with any number of toppings without having to create a new constructor for each possible combination.
    //You can also use a vector to store the toppings, so that you can add as many toppings as you want without having to create a new constructor for each possible combination.

   
    return 0;
}