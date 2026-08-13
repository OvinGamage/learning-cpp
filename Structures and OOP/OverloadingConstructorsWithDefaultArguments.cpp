#include <iostream>
#include <string>

class pizza{
    public:
    std::string size;
    std::string crust;
    std::string topping1;
    std::string topping2;
    std::string topping3;
    pizza(std::string s="Medium", std::string c="Thin Crust", std::string t1="", std::string t2="", std::string t3=""){
        size=s;
        crust=c;
        topping1=t1;
        topping2=t2;
        topping3=t3;
        std::string toppings="";
        if(!topping1.empty()) toppings+=topping1;
        else toppings="no toppings";
        if(!topping2.empty()) toppings+=(toppings.empty() ? "" : ", "+topping2);
        if(!topping3.empty()) toppings+=(toppings.empty() ? "" : ", "+topping3);
        //after checking if topping 1 is empty , if its empty we outpur "no toppings"
        //The ternary operator is used to check if the toppings string is empty or not. If it is empty, it adds the topping(empty space) to the toppings string without a comma. 
        //If it is not empty, it adds a comma and then the topping to the toppings string.
        if (toppings.empty()){
            std::cout<<"Your pizza is ready! It is a "<<size<<" pizza with "<<crust<<" crust and the following toppings: "<<toppings<<"."<<std::endl;
        }
        else{
            std::cout<<"Your pizza is ready! It is a "<<size<<" pizza with "<<crust<<" crust and the following toppings: "<<toppings<<"."<<std::endl;
        }

        //by using default arguments, we can create a pizza with any number of toppings without having to create a new constructor for each possible combination.
   
}
};

int main(){

    pizza OvinsPizza("Large", "Stuffed Crust", "Pepperoni", "Extra Cheese", "Bacon");
    pizza SpongebobsPizza("Medium", "Thin Crust");
    pizza PatrickPizza("Medium", "Thin Crust", "Mushrooms", "Onions");
    pizza SquidwardsPizza("Small", "Deep Dish", "Sausage", "Green Peppers", "Olives");
    
    return 0;
}