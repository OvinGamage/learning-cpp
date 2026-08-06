#include <iostream>
void sort(int array[],int size);
int main(){
    //Bubble sort is a simple but not so efficient algorithm for sorting the elements of an array
    int numbers[]={3,5,2,6,8,1,4,0,9,7};
    int size=sizeof(numbers)/sizeof(numbers[0]);
    sort(numbers,size);
    for(int number:numbers){
        std::cout<<number<<" ";}
    return 0;
}
void sort(int array[],int size){
    int temp;
    for (int i=0;i<size-1;i++){
        for(int j=0;j<size-i-1;j++){
            if (array[j]>array[j+1]){
                //by swapping this less than sign for a more than sign, you can make this script sort in descending order instead
                temp=array[j];
                array[j]=array[j+1];
                array[j+1]=temp;

            }

        }
    }

}
