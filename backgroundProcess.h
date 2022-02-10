
/*
@Autor : Yuri Domingos 
Data   : 10 - 02 - 2022
Objectivo : Construir  linux terminal 
*/

#ifndef __BACKGROUNDPROCESS_H
#define __BACKGROUNDPROCESS_H

// This is the function for running a background process, i.e a command ending with &
void backgroundProcess(long long int totalArgsInEachCommand, char *listofArgs[]);

#endif
