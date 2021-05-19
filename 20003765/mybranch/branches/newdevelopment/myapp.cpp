//myapp.cpp
//simple code

//author: Mingkai Lou
//date: 04/12/2020

//include system header file
#include <stdlib.h>
#include <stdio.h>
//include user header file
#include "myfunctions.h"

//enter point from OS
int main()
{
  char input[500];
  //promt user for name
  printf("Please enter your name (<500 char):");
  scanf("%s", input);
  //call function defined in myfunctions.c
  sayHello(input);
  printFractions();
  printName(input);
  
  return EXIT_SUCCESS;
}
