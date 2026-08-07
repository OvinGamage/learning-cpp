#include <iostream>
enum day{sunday=0,monday=1,tuesday=2,wednesday=3,thursday=4,friday=5,saturday=6};
int main(){
//enums are a user-defined data type that consists of integral constants.
// Each of the enumerators is assigned an integer value, starting from 0 by default. 
//In this example, we have defined an enum called "day" that represents the days of the week, with each day assigned a corresponding integer value.
    std::cout<<"Enter a number between 0 and 6:0 for Sunday ,1 for Monday etc."<<std::endl;
    int today;
    std::cin>>today;
    
    switch(today){
        case sunday:
            std::cout<<"Today is Sunday"<<std::endl;
            break;
        case monday:
            std::cout<<"Today is Monday"<<std::endl;
            break;
        case tuesday:
            std::cout<<"Today is Tuesday"<<std::endl;
            break;
        case wednesday:
            std::cout<<"Today is Wednesday"<<std::endl;
            break;
        case thursday:
            std::cout<<"Today is Thursday"<<std::endl;
            break;
        case friday:
            std::cout<<"Today is Friday"<<std::endl;
            break;
        case saturday:
            std::cout<<"Today is Saturday"<<std::endl;
            break;
        default:
            std::cout<<"Invalid input"<<std::endl;
    }
}