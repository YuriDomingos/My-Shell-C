/*
@Autor : Yuri Domingos 
Data   : 10 - 02 - 2022
Objectivo : Construir  linux terminal 
*/
#ifndef __REDIRECTION_H
#define __REDIRECTION_H

// These are the functions used for redirection
int checkRedirection(ll totalArgsInEachCommand, char *listOfArgs[]);
int redirectionHandler(ll totalArgsInEachCommand, char *listOfArgs[]);

#endif
