
#include <iostream>
int main(){
    int *pNum=NULL;
    pNum=new int; //dynamically allocating memory for an integer
    *pNum=10; //assigning value to the dynamically allocated memory 
    std::cout<<"Value: "<<*pNum<<'\n'; //printing the value stored in the dynamically allocated memory
    std::cout<<"Address: "<<pNum<<'\n'; //printing the address of the dynamically allocated memory
    delete pNum; //deallocating the dynamically allocated memory
    return 0;
}
