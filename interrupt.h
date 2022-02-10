/*
@Autor : Yuri Domingos 
Data   : 10 - 02 - 2022
Objectivo : Construir  linux terminal 
*/
#ifndef __INTERRUPT_H
#define __INTERRUPT_H

// These functions are used to implement the command - baywatch -n 5 interrupt
void interrupt(long long totalArgsInEachCommand, char *c[]);
int endingCondition(ll time, char *c[]);

#endif
