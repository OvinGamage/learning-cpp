#include <iostream>
int main() {
    std::cout<<"Enter your name: ";
    std::string name;
    std::getline(std::cin>>std::ws, name);
    std::cout<<"Enter your age: ";
    std::string age;
    std::getline(std::cin>>std::ws, age);

    std::cout<<"Hello, " << name << "!" <<"You are " << age << " years old." << std::endl;
    return 0;
}
