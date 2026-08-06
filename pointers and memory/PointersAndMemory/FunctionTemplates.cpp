#include<iostream>
template <typename T,typename U>
auto max(T a, U b) {
    return (a > b) ? a : b;
}
int main(){
    // a funtion template is a blueprint for creating functions based on the data type provided as an argument. It allows you to write a single function that can work with different data types without having to overload the function for each type. This is particularly useful for generic programming, where you want to create functions that can operate on various data types while maintaining type safety.
    std::cout<<max(2.3,28)<<std::endl;

}