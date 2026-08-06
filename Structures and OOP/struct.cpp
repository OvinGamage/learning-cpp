#include <iostream>
struct student{
    std::string name;
    int age;
    bool enrolled;
}; //You need to add the semi colon after ending a struct
// A struct is a user-defined data type that allows us to group variables of different types together. 
//In this case, we have defined a struct called "student" that contains three members:
// a string for the student's name, an integer for their age, and a boolean to indicate whether they are enrolled or not.
int main (){
    student student1;
    student1.name = "John Doe";
    student1.age = 23;  
    student1.enrolled = true;
    student student2;
    student2.name= "Ovin Gamage";
    student2.age= 20;
    student2.enrolled = false;
    std::cout<<student2.name<<std::endl;
    std::cout<<student2.age<<std::endl;
    std::cout<<student2.enrolled<<std::endl;
    std::cout<<student1.name<<std::endl;
    std::cout<<student1.age<<std::endl;
    std::cout<<student1.enrolled<<std::endl;

}