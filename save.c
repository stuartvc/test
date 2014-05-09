#include "save.h"



int save(char *filePath, User *Users, int numbUsers) {
    int i = 0;
    while (filePath[i] != '\n' && i++<256);
    if (i<256) filePath[i] = '\0';

    FILE *saveFile = fopen(filePath, "a");
    if (!saveFile) {
        fprintf(stdout, "could not open file \"%s\".", filePath);
        return 1;
    }
    
    for (i = 0; i < numbUsers; i++) {
        fprintf(saveFile, "%s - %i - %s\n", getName(&Users[i]), getAge(&Users[i]), getLocation(&Users[i]));
    }
    fclose(saveFile);
    return 0;
    
}
