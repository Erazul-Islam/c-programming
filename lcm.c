#include<stdio.h>
int main () {
    int a, b, x;

    printf("Enter two numbers (a > b): ");
    scanf("%d %d", &a, &b);

    if (a > b){
        x = b ;
    } else {
        x = a ;
    }

    while (1) {
        if ( x % a == 0) {
            if ( x % b == 0) {
                printf("LCM = %d\n", x);
                break;
            }
        } 
        
        x = x + 1 ;
        
    }
}