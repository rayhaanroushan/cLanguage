#include <stdio.h>

int main() {
    int num, i = 1;
    printf("Enter a number: ");
    scanf("%d", &num);

    do {
        printf("%d x %d = %d\n", num, i, num * i);
        i++;
    } while (i <= 20);

    return 0;
}