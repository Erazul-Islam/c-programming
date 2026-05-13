#include<stdio.h>
int main()
{
    int N , i;
    printf("Please input a number:");
    scanf("%d", &N);
    if (N <= 1) {
        printf("%d is not a prime number.", N);
        return 0;
    }else {
        for (i = 2; i < N; i = i + 1){
            if (N % i == 0) {
                printf("%d is not a prime number.", N);
                return 0;
            }
        }
        printf("%d is a prime number.", N);
    }

    return 0;
}