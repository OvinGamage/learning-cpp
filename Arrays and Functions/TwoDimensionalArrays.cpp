#include <iostream>
#include <string>
int main(){
    std::string cars[3][4]={{"Corolla","Prius","Camry","Yaris"},
                            {"Civic","Accord","CR-V","HR-V"},
                            {"Focus","F-150","Mustang","Fiesta"}};
    //You cant print out an entire row/column at once
    int rows=sizeof(cars)/sizeof(cars[0]);//no of all elements/size of a column
    int columns=sizeof(cars[0])/sizeof(cars[0][0]);//size of a column/size of an element
    for(int i=0;i<rows;i++){
        for(int j=0;j<columns;j++){
            std::cout<<cars[i][j]<<" ";
        }
        std::cout<<std::endl;
    }
    
    return 0;
}

