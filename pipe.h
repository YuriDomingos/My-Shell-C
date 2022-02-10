/*
@Autor : Yuri Domingos 
Data   : 10 - 02 - 2022
Objectivo : Construir  linux terminal 
*/
#ifndef __PIPE_H
#define __PIPE_H

// These functions implement the piping functionality
int checkPiping(char* listOfArgs[], long long totalArgsInEachCommand);
void piping(char* command, char* listOfArgs[], long long totalArgsInEachCommand);


#endif
