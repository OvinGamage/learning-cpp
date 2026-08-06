#include <iostream>
void functionWithLocalVariable();
//local variables are variables that are declared inside a function or block and can only be accessed within that function or block. They are created when the function is called and destroyed when the function exits.
int main(){
    int localVar = 10;
    std::cout << localVar << std::endl;
    functionWithLocalVariable();
    return 0;
}
void functionWithLocalVariable(){
    int localVar = 20;
    std::cout << localVar << std::endl;
}