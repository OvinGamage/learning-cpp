#include <iostream>
class human{
    public:
        std::string name;
        std::string gender;
        std::string occupation;
        int age;
        void introduce(){
            std::cout << "Hello, my name is " << name << " and I am " << age << " years old." << std::endl;
        }
        void eat(){
            std::cout << name << " is eating." << std::endl;
        }
        void drink(){
            std::cout << name << " is drinking." << std::endl;
        }
        void sleep(){
            std::cout << name << " is sleeping." << std::endl;
        }
};
int main(){
    //objects are instances of classes ,and a class is a blueprint for creating objects. 
    //It defines the properties and behaviors that the objects will have.
    // An object is an instance of a class, and it can have its own unique values for the properties defined in the class.
    human person1;
    person1.name = "John";
    person1.gender = "Male";
    person1.occupation = "Engineer";
    person1.age = 30;
    person1.introduce();
    person1.eat();
    person1.drink();
    person1.sleep();
}