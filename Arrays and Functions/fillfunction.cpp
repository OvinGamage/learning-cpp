#include<iostream>
#include<string>
#include<algorithm>
int main(){
    const int size=100;
    std::string food[size];
    std::fill(food, food + (size/2), "Pizza");
    std::fill(food + (size/2), food + size, "Burrito");
    for(std::string item:food){
        std::cout<<item<<std::endl;
    }
    return 0;
}