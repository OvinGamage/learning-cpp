#include <iostream>
int main(){
    int grade;
    std::cout<<"Enter your grade (0-100): ";
    std::cin>>grade;
    grade>=60? std::cout<<"You passed!": std::cout<<"You failed!";
    return 0;
}