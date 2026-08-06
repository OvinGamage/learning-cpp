#include <iostream>
//When you pass an array as an argument of a function;it forgets its size.Therefore we need to define a whole new variable for the function to get the size of the array
 float GetTotal(float price[],int size);
int main(){
    float price[]={4.99,7.50,10.00,13,25};
    int size=sizeof(price)/sizeof(price[0]);
    
    float Total =GetTotal(price,size);
    std::cout << "Total: $" << Total<<std::endl;

    return 0;
    
}
float GetTotal(float price[],int size){
    float Total=0;
    
    for(int i =0;i<size;i++){
        Total+=price[i];
    }
    return Total;
} 