#include <stdio.h>
int main() {
    char name[50];

    printf("Enter your name: ");
    fgets(name, sizeof(name), stdin); // Reads the entire line, including spaces

   

    printf("Hi %s \n", name);

    int a, b;
    printf("Enter A Value please Suhail Sir: ");
    scanf("%d", &a);

    printf("Enter B value Suhail Sir: ");
    scanf("%d", &b);

    int sum = a + b;
    printf("Ohh Suhail sir your answer: %d\n", sum);

    return 0;
}