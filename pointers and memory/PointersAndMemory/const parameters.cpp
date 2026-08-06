#include <iostream>
void printinfo(const std::string name,const std::string age);
int main(){
    //when you add const to a variable; within the scope of the function that variable was declared as const, the function cannot change the value of the variable;setting it to read-only
    // using const is more secure and converys intent clearly
    std::string name ="Ovin";
    std::string age ="20";
    printinfo(name,age);
    return 0;
}
void printinfo(const std::string name,const std::string age){
   //Although I passed by value in the arguments;passing by reference is better for performance and is a better practice
    std::cout<<name<<'\n';
    std::cout<<age<<'\n';
}
