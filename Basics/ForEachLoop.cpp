#include <iostream>
#include <string>
int main(){
    // a for each loop is a loop
    std::string bigbang[]={"Sheldon","Howard","Raj","Leonard"};
    for(std::string nerd:bigbang){
        std::cout<<nerd<<'\n';

    }


    return 0;
}