#include <stdio.h>
int main() {
    int a;
    printf("Enter your age: ");
    scanf("%d", &a);
    
    if (0 < a && a < 18) {
        printf("You have not been granted access to this site. You are underage.\n");
    } else if (a == 18) {
        printf("You have been granted restricted access to this site. You are 18.\n");
    } else if (a<0) {
        printf("Invalid age entered. Age cannot be negative.\n");
    } else {
        printf("You have been granted access to this site. You are of legal age.\n");
    }

}