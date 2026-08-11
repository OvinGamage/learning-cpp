#include <iostream>
class employee{
    public:
        std::string name;
        std::string gender;
        std::string occupation;
        int age;
        //constructors are special member functions that are used to initialize objects of a class.
        //As seen below, the constructor looks like a function that uses the methods of the class as its arguments
        //But a constructor doesn't have a return type, not even void. 
        employee(std::string n, std::string g, std::string o, int a) {
            name = n;
            gender = g;
            occupation = o;
            age = a;
        }
};
int main(){
    
    employee person("Spongebob", "Male", "Fry Cook", 30);
    std::cout << "Name: " << person.name << ", Gender: " << person.gender << ", Occupation: " << person.occupation << ", Age: " << person.age << std::endl;
}
