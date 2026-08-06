#include<iostream>
int main(){
    // Break - Used to break out of a loop
    // Continue - Used to skip the current iteration of a loop and continue with the next iteration
    for (int i = 0; i < 21; i++) {
        if (i == 17) {
            break;
        }
        if (i==13){
            continue;
        }
        std::cout << i << std::endl;
    }
    
    return 0;
}