#include <stdlib.h>
#include <stdio.h>
#include "user.h"

void newUser(User *newUser) {
    newUser->name = malloc(256*sizeof(char));
    newUser->location = malloc(256*sizeof(char));
}

void deleteUser(User *user){
    free(user->name);
    free(user->location);
}

void setName(char *newName,User *user){
    strncpy(user->name, newName, 256);
}

char *getName(User *user) {
    return user->name;
}


void setAge(int newAge,User *user) {
    user->age = newAge;
}

int getAge(User *user) {
    return user->age;
}

void setLocation(char *newLocation,User *user) {
    strncpy(user->location, newLocation, 256);
}

char *getLocation(User *user) {
    return user->location;
}
