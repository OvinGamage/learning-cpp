#include<iostream>
double square(double x){
    return x*x;
}
int main(){
    std::cout<<"Enter a number: ";
    double num;
    std::cin>>num;
    double result = square(num);
    std::cout<<"The square of "<<num<<" is "<<result<<std::endl;
    return 0;
}