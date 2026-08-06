#include <iostream>
int searcharray(int array[],int size,int index);
int main(){
    int numbers[]={1,2,3,4,5,6,7,8,9,10};
    int size=sizeof(numbers)/sizeof(numbers[0]);
    int index;
    int MyNum;
    std::cout<<"Enter the number you want to search for:"<<std::endl;
    std::cin>>MyNum;
    index=searcharray(numbers,size,MyNum);
    std::cout<<"The index of the number is "<<index<<std::endl;
    return 0;
    

}
int searcharray(int array[],int size,int index){
    //Note that the arguments of the function are generic but match the data types of the arguments given in main
    for(int i=0;i<size;i++){
        if(array[i]==index){
            return i;
        }
        
    }
    return -1;


}