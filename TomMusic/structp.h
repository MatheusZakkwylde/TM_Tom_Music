#ifndef STRUCTP_H_INCLUDED
#define STRUCTP_H_INCLUDED

#include <iostream>
#include <string.h>


int Opcao;
int life = 3;
int rondomico;
int valor;
int escolha = 1;
int escolha2;

FILE *arquivo;
char pesquisa [100];
int contador = 0,numero_corrente = 0;

struct cadastro {
	char Nome [30];
	int senha;
	int pontuacao = 5500;
}cad;

struct tons_e_digitos {
    int digito;
    char tom [50];
}teclas;

void Efeitos ();
void som_aberturas ();
void som_aplausos ();
void som_risada ();
void som_vaias ();
void Menu_inicial ();
void cadastro_do_jogo ();
void Login ();
void Menu_secundario ();
void Nivel_1 ();
void nivel_2 ();
void configuracoes ();
void gravacao ();
void leitura_de_arquivo ();
void modificando_arquivo();

#endif // STRUCTP_H_INCLUDED
