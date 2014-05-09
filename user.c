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
    int i = 0;
    strncpy(user->name, newName, 256);
    while (user->name[i] != '\n' && i++<256);
    if (i<256) user->name[i] = '\0';
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
    int i = 0;
    strncpy(user->location, newLocation, 256);
    while (user->location[i] != '\n' && i++<256);
    if (i<256) user->location[i] = '\0';
}

char *getLocation(User *user) {
    return user->location;
}
