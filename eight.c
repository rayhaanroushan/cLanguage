#include<stdio.h>

int main(){
    char firstName[] = "suhail";
    char secondName[] = "roushan";
    char city[] = "hyderabad";
    long int phone = 9618211626;
    int age = 23;
    float cgpa = 9.5;
    char bloodGroup = 'B';
    

    printf("%s\n %s\n %s\n %c\n",firstName,secondName,city,bloodGroup);
    printf("%ld\n %d\n %f\n",phone,age,cgpa);
    return 0;

}
