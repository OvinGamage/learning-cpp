#include <iostream>
struct car{
    std::string make;
    std::string model;
    int year;
    std::string color;
};
void printcar(car car); 
void betterprintcar(car &car);
int main(){
    car car1;
    car1.make = "Toyota";
    car1.model = "Camry";
    car1.year = 2020;
    car1.color = "Red";

    car car2;
    car2.make = "Honda";
    car2.model = "Civic";
    car2.year = 2019;
    car2.color = "Blue";

   printcar(car1);
   betterprintcar(car2);

}
void printcar(car car){
    //when a struct is passed as an argument to a function, it is passed by value. 
    //This means that a copy of the struct is made and any changes made to the struct inside the function will not affect the original struct outside the function.
    std::cout<<"Here is your car"<<std::endl;
    std::cout<<car.make<<std::endl;
    std::cout<<car.model<<std::endl;
    std::cout<<car.year<<std::endl;
    std::cout<<car.color<<std::endl;
}
void betterprintcar(car &car){
    //when a struct is passed as an argument to a function with a preceding & sign, it is passed by reference. 
    //This means that a reference to the original struct is passed to the function, and any changes made to the struct inside the function will affect the original struct outside the function.
    //The outputs of printcar and betterprintcar are the same, but the difference is that betterprintcar is more efficient because it does not create a copy of the struct.
    std::cout<<"Here is your car"<<std::endl;
    std::cout<<car.make<<std::endl;
    std::cout<<car.model<<std::endl;
    std::cout<<car.year<<std::endl;
    std::cout<<car.color<<std::endl;
}
