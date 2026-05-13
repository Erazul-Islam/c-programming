#include <stdio.h>
int main(){
    int N, i, sum=0;
    printf("Please input a number:");
    scanf("%d", &N);
    for(i=1; i<=N; i++){
        sum = sum + i;
    }
    printf("The sum of the series is: %d\n", sum);
    return 0;
}