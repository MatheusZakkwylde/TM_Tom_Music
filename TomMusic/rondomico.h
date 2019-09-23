#ifndef RONDOMICO_H_INCLUDED
#define RONDOMICO_H_INCLUDED

#include <iostream>
#include <sstream>
#include <time.h>

int valor_rondomico(int valor){

 srand(time (NULL));
 valor = valor + (rand()%7)+1;
 return valor;
}

#endif // RONDOMICO_H_INCLUDED
