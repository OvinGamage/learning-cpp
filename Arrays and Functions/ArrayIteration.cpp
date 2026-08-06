#include <iostream>
int main(){
//in c++, there is no direct method to return the size of an array.It must be stored in a separate variable first, then called later during the arguments of the for loop

    std::string bikinibottom[]={"Spongebob","Squidward","Mr Krabs","Patrick","Patrick"};
    int size=std::size(bikinibottom);
    for (int i;i<size;i++){
        std::cout<<bikinibottom[i]<<" lives in Bikini Bottom\n";
    }
}