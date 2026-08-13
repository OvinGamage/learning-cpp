#include <iostream>
class animal{
    public:
        std::string name;
        std::string species;
        int age;
        void introduce(){
            std::cout << "Hello, my name is " << name << " and I am a " << species << "." << std::endl;
        }
};
class dog: public animal{
    //The colon (:) after the class name indicates that the dog class is inheriting from the animal class.
    //Therefore, the dog class has access to all the public members of the animal class, including the name, species, and age variables, as well as the introduce() method.
    public:
        std::string breed;
        void bark(){
            std::cout << name << " is barking." << std::endl;
        }
};
class cat: public animal{
    public:
        std::string color;
        void meow(){
            std::cout << name << " is meowing." << std::endl;
        }
};
int main(){
    dog myDog;
    myDog.name = "Buddy";
    myDog.species = "Canine";
    myDog.age = 3;
    myDog.breed = "Golden Retriever";

    myDog.introduce();
    myDog.bark();
    cat myCat;
    myCat.name = "Whiskers";
    myCat.species = "Feline";
    myCat.age = 2;
    myCat.color = "Tabby";
    myCat.introduce();
    myCat.meow();

    return 0;
}