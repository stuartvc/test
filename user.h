#ifndef USER_H
#define USER_H

#include <stdlib.h>
#include <string.h>

typedef struct {
    char *name;
    int age;
    char *location;
} User;

void    newUser(User *newUser); 
void    deleteUser(User *user);

void    setName(char *newName,User *user);
char    *getName(User *user);
void    setAge(int newAge,User *user);
int     getAge(User *user);
void    setLocation(char *newLocation,User *user);
char    *getLocation(User *user);

#endif
