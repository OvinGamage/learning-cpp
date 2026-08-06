#include <iostream>
int main(){
    std::cout<<"Enter the temperature in Celsius: ";
    float temperature;
    std::cin>>temperature;
    if (temperature >10 && temperature < 30){
        std::cout<<"The temperature is moderate."<<std::endl;
    }
    else if (temperature <=10 || temperature >=30){
        std::cout<<"The temperature is extreme."<<std::endl;
    }
    return 0;
}