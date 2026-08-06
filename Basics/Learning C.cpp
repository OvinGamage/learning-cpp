#include <stdio.h>
int main(){
    int age=20;
    float price=12.3412312313;
    double pi=3.1415926535;
    char currency ='$';
    char name[]="Ovin";
    printf("Age: %d\n", age);
    printf("Price: %+19.9f\n", price);
    printf("Pi: %lf\n", pi);
    printf("Currency: %c\n", currency);
    printf("Name: %s\n", name);
    return 0;
}
