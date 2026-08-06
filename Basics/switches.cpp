#include <iostream>
int main(){
    int dayofweek='\0';
    std::cout<<"Enter a number (0-6) for the day of the week: ";
    std::cin>>dayofweek;
    switch(dayofweek){
        case 0:
            std::cout<<"Sunday"<<std::endl;
            break;
        case 1:
            std::cout<<"Monday"<<std::endl;
            break;
        case 2:
            std::cout<<"Tuesday"<<std::endl;
            break;
        case 3:
            std::cout<<"Wednesday"<<std::endl;
            break;
        case 4:
            std::cout<<"Thursday"<<std::endl;
            break;
        case 5:
            std::cout<<"Friday"<<std::endl;
            break;
        case 6:
            std::cout<<"Saturday"<<std::endl;
            break;
        default:
            std::cout<<"Invalid day of the week."<<std::endl;
    }

}