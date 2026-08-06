#include<iostream>
int main(){
    // a function is a block of reusable code
    auto happyBirthday = [](const std::string& name) {
        std::cout << "Happy Birthday, " << name << "!" << std::endl;
    };
    happyBirthday("Alice");         
    happyBirthday("Bob");
    std::cout<<"Enter your name: ";
    std::string userName;
    std::getline(std::cin, userName);
    happyBirthday(userName);
    return 0;
}