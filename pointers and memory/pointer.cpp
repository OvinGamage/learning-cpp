#include <iostream>
int main(){
    // A pointer is a variable that stores the address of another variable
    //& address-of operator
    //*deference operator
    //The Address-of operator (&) retrieves the exact physical location (memory address) where a variable is stored in RAM.
    //The Dereference operator (*) does the exact opposite. Given a pointer containing a memory address, it reaches into that address to read or modify the value stored there.
    std::string name= "Ovin";
    std::string*pname= &name;
    std::string pizzas[]={"Margarita","Pepperoni","default"};
    std::cout<< pname<<std::endl;//outputs the pointer
    std::cout<<*pname<<std::endl;//defers back to the variable referenced by the pointer(Returns the original variable)
    //If we consider an array,it is accessed as a memory address, the methos std::cout for an array gives a memory address
    std::cout<<pizzas<<std::endl;
    //using the derefernce operator in front of the array name just outputs the first element of the array
    std::cout<<*pizzas<<std::endl;
    return 0;
}
