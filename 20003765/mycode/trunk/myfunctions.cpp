//This is a simple function
//defines the sayHello function
//
//author: Mingkai Lou
//date:04/12/2020

//include user header file
#include "myfunctions.h"

//sayHello(text)
//prints the greeting "Hello 'text'"
//para: const char* text -text containing name to greet
//return:void
void sayHello(const char* text)
{
  printf("Hello %s my name is Mingkai - nice to meet you.\n", text);
  
}
void printFractions()
{
  for(int i=1; i<=10; ++i){
   cout<<"1/"<<i<<"="<<1/(i*1.0)<<setprecision(1)<<"\n";
  }
}
void printName (const char* text)
{
  printf("Goodebye %s - it was nice to meet you.\n", text);
}
