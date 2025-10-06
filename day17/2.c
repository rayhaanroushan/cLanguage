include <stdio.h>
include <string.h>
include <unistd.h>

int main() {
    char name[50];
    char college[50];

    printf("Enter your name: ");
    scanf("%s", name);
    sleep(2);

    printf("Assalam alaikum %s sahab\n", name);
    sleep(2);

    printf("Apka college ka naam kya hai? ");
    scanf("%s", college);
    sleep(2);

    if (strcmp(college, "Nawabshalam") == 0) {
        printf("Us college ka address hai: 123 Main Street, Nawabshalam City\n");
    } else if (strcmp(college, "Aligarh") == 0) {
        printf("Us college ka address hai: 456 College Road, Aligarh City\n");
    } else if (strcmp(college, "Jamia") == 0) {
        printf("Us college ka address hai: 789 University Lane, Jamia Nagar\n");
    } else if (strcmp(college, "BHU") == 0) {
        printf("Us college ka address hai: 101 Ganga Vihar, Varanasi\n");
    } else {
        printf("Maaf kijiye, is college ka address humare paas nahin hai.\n");
    }

    return 0;
}