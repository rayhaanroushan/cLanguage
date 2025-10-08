#include <stdio.h>
#include <string.h>
#include <unistd.h>

int main() {
    char name[50];
    char college[50];

    printf("Enter your name: ");
    scanf("%s", name);

    sleep(2);
    printf("Assalam walekum %s madam\n", name);

    sleep(2);
    printf("Apka college ka naam kya hai? : ");
    scanf("%s", college);

    sleep(2);
    if (strcmp(college, "NawabShalam") == 0) {
        printf("apka college New Malakpet, Near Railway Station ke pass hai \n");
    } else if (strcmp(college, "Anwaruloom") == 0) {
        printf("apka college Mozampura, Bazar Ghat, New Mallepally ke pass hai \n");  
    } else if (strcmp(college, "LordsEngineering") ==0) {
        printf("apka college Abhyudaya Nagar, Himayat Sagar Village ke pass hai \n");
    } else if (strcmp(college, "Donbosco") ==0) {
        printf("apka college Sultan Nagar,Erragadda ke pass hai \n"); 
        } else if (strcmp(college, "DeccanCollege") ==0) {
        printf("Santosh Nagar Main Rd, Kanchan Bagh \n");         
    } else {
        printf("Maaf kijiye, is college ka address hamare paas nahin hai.\n");
    }

    sleep(2);
    printf("aur kuch madad chaiye %s madam",name);

    return 0;
}