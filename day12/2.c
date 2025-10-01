#include<stdio.h>

int main(){
    int favouriteNumber;

    printf("enter your favourite number (1-5):");
    scanf("%d",&favouriteNumber);

    switch (favouriteNumber){
        case '1':
        printf("yourWaste\n");
        break;
        case '2':
        printf("good");
        break;
        case '3':
        printf("houle");
        break;
        case '4':
        printf("ronaldo");
        break;
        case '5':
        printf("salmon boi");
        break;
        default:
        printf("Invalid favouriteNumber\n");
    }
    return 0;
}