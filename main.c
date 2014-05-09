#include <stdio.h>
#include <stdlib.h>
#include "user.h"

int main() {

    int numberOfUsers = 0;
    fprintf(stdout, "Enter number of users: ");
    fscanf(stdin, "%i", &numberOfUsers);
    getchar();

    User *Users = malloc(numberOfUsers*sizeof(User));

    int i = 0;
    char * temp = malloc(256*sizeof(char));
    int temp_int = 0;
    for (i = 0; i < numberOfUsers; i++) {
        newUser(&Users[i]);
        fprintf(stdout, "\nUser: %i\nName: ", i);
        setName(fgets(temp, 255, stdin), &Users[i]);
        fprintf(stdout, "Age: ");
        fscanf(stdin, "%i", &temp_int);
        getchar();
        setAge(temp_int, &Users[i]);
        fprintf(stdout, "Location: ", i);
        setLocation(fgets(temp, 256, stdin), &Users[i]);
    }
    
    fprintf(stdout, "\nListing Users:\n");
    
    for (i = 0; i < numberOfUsers; i++) {
        fprintf(stdout, "%s", getName(&Users[i]));
        fprintf(stdout, " is %i years old", getAge(&Users[i]));
        fprintf(stdout, " and lives in %s.\n", getLocation(&Users[i]));
    }
    
    for (i = 0; i < numberOfUsers; i++) {
        deleteUser(&Users[i]);
    }
    free(Users);

    return 0;
}
