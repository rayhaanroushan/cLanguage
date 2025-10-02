#include<stdio.h>
#include<unistd.h>

int main (){

    char name [50];

    printf("Enter your name sir:");
    scanf("%s",name);
    
    sleep(2);
    printf("As-salamu alaykum, %s sir\n", name);

    sleep(2);
    printf("ok what is your college name : %s \n:",name);

    return 0;
}