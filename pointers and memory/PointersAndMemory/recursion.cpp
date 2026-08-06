#include<iostream>
int factorial(int num);
int main(){
    factorial(5);
}
int factorial(int num){
    if(num == 0 || num == 1){
        return 1;
    }
    else{
        return num * factorial(num - 1);
    }
}
//This script shows how to calculate the factorial of a number using recursion in C++. The function `factorial` takes an integer `num` as input and returns its factorial. The base case is when `num` is 0 or 1, in which case it returns 1. For other values, it recursively calls itself with `num - 1` and multiplies the result by `num`. The main function calls `factorial(5)` to compute the factorial of 5.
//Recursion is mainly used in search algorithms, sorting algorithms, and in problems that can be broken down into smaller subproblems. It is a powerful technique but should be used with caution to avoid stack overflow errors for large inputs.
//Because it uses more memory and can be less efficient than iterative solutions, it's important to consider the trade-offs when choosing to use recursion.