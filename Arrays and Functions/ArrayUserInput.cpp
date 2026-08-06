#include<iostream>
#include<string>
int main(){
    int count=0;
    std::string food[5];
    int size=sizeof(food)/sizeof(food[0]);
    for(int i=0;i<size;i++){
        
        std::cout<<"Enter a type of food you like or q to quit #"<<i+1<<":"<<std::endl;
        std::string temp;// By assigning the input into a temporary variable, we can  break the loop in a cleaner way
        std::getline(std::cin,temp);
        // Remove hidden Windows carriage return '\r' if present
        if (!temp.empty() && temp.back() == '\r') {
            temp.pop_back();
        }
        if (temp=="q"||temp=="Q"){
            
            break;
        }
        else{
            food[count]=temp;
            count+=1;
        }}
        int i=0;
    for (i=0;i<count;i++){
        std::cout << "You like to eat " << food[i] << std::endl;}
    }
                        