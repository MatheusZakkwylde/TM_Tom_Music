#ifndef SONS_H_INCLUDED
#define SONS_H_INCLUDED

#include <iostream>
#include <windows.h>

void som_aberturas(){

    PlaySound(TEXT("sons\\abertura.wav"), NULL, SND_FILENAME);
}
void som_aplausos (){
	PlaySound(TEXT("sons\\Aplausos.wav"), NULL, SND_FILENAME);
}
void som_risada (){
	PlaySound(TEXT("sons\\Risada.wav"), NULL, SND_FILENAME);
}
void som_vaias () {
	PlaySound(TEXT("sons\\u.wav"), NULL, SND_FILENAME);
}

#endif // SONS_H_INCLUDED
