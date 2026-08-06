#include <iostream>
void swap(std::string x, std::string y);
void properswap(std::string &x,std::string &y);
int main(){
    
    //Why It Doesn't Swap
//Because I passed the variables by value, C++ makes a completely new copy of x and y when entering the swap function.

//temp = x; copies the local copy of x into temp.

//x = y; changes the local copy of x.

//y = temp; changes the local copy of y.

//The swapping happens inside the function, but as soon as swap finishes, those local copies are destroyed. The original x and y inside main() remain untouched.
    std::string x = "Kool-Aid";
    std::string y = "Water";
    swap(x,y);
    std::cout<<"X: "<<x<<'\n';
    std::cout<<"Y: "<<y<<'\n';
    properswap(x,y);//Even though the pointers are the actual argument, we only need to state the argument as is when we call the function; the "&" sign is redundant
    std::cout<<" swapped X: "<<x<<'\n';
    std::cout<<"swapped Y: "<<y<<'\n';

    return 0;
}
void swap(std::string x, std::string y){
    std::string temp;
    temp = x;
    x = y;
    y = temp;
}
void properswap(std::string &x,std::string &y){
std::string temp;
    temp = x;
    x = y;
    y = temp;

}
