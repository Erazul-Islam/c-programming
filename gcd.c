#include <stdio.h>

int main() {
    int l, s, r;

    printf("Enter two numbers (l > s): ");
    scanf("%d %d", &l, &s);

    while (1) {
        r = l % s;

        if (r == 0) {
            printf("GCD = %d\n", s);
            break;
        } else {

        l = s;
        s = r;
        }
    }

    return 0;
}