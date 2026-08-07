#include <iostream>
struct car{
    std::string make;
    std::string model;
    int year;
    std::string color;
};
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

   

}
void printcar(car car){
    std::cout<<"Here is your car"<<std::endl;
    std::cout<<car.make<<std::endl;
    std::cout<<car.model<<std::endl;
    std::cout<<car.year<<std::endl;
    std::cout<<car.color<<std::endl;
}
