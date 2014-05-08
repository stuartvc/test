#include <stdio.h>
#include <stdlib.h>
#include "user.h"

int main() {
    User stuart;
    newUser(&stuart);

    setName("stuart", &stuart);
    fprintf(stdout, "name is %s\n", getName(&stuart));

    setAge(19, &stuart);
    fprintf(stdout, "age is %i\n", getAge(&stuart));

    setLocation("Toronto", &stuart);
    fprintf(stdout, "location is %s\n", getLocation(&stuart));

    

    
}
