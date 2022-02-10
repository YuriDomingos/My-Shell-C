
/*
@Autor : Yuri Domingos 
Data   : 10 - 02 - 2022
Objectivo : Construir  linux terminal 
*/
#include "main.h"

// Function to implement echo command
void echo(long long int totalArgsInEachCommand, char *listOfArgs[]) {
    if (totalArgsInEachCommand > 1) {
        for(int i = 1; i < totalArgsInEachCommand; i++) {
            printf("%s ", listOfArgs[i]);
        }
    }
    printf("\n");
    return;
}
