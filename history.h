
/*
@Autor : Yuri Domingos 
Data   : 10 - 02 - 2022
Objectivo : Construir  linux terminal 
*/
#ifndef __HISTORY_H
#define __HISTORY_H

// These functions are used to implement the command - history with flags
void loadHistory();
int updatehistory();
void history(long long int n, char *listOfArgs[]);


#endif
