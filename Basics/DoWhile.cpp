#include <iostream>
int main(){
    // A do while loop executes some code at least once and then continues to execute the code as long as the condition is true.
    std::string input;
    do{
        std::cout<<"do you want to play again? (y/n): ";
        std::cin>>input;
    } while (input == "y" || input == "Y");
    return 0;
}