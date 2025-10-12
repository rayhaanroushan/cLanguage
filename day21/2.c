#include <stdio.h>

int factorial(int n); 

int main() {
    int num, fact;
    printf("Enter a number: ");
    scanf("%d", &num);
    if(num==0){
        printf("your Factorial Number is 0");
        return 0;
    }
    fact = factorial(num);  
    printf("Factorial of %d is %d\n", num, fact);
    return 0;
}
int factorial(int n) {
    int i, f = 1;
    for (i = 1; i <= n; i++) {
        f = f * i;
    }
    return f;
}