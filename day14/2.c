#include<stdio.h>
#include<unistd.h>

int main() {
    char name[50];
    printf("Enter your name: ");
    scanf("%s", name);

    printf("As-salamu Alaikum, %s\n", name);

    sleep(2); 

    printf("How can I help you, %s?\n", name);

    return 0;
}