#include<stdlib.h>
#include<string.h>
#include "studente.h"
struct studente
{
	char* nome;
	char* cognome;
	char* matricola;
};

Studente new_studente(char* nome,char* cognome,char* matricola)
{
	Studente s=malloc(sizeof(struct studente));
	s->nome=strdup(nome);
	s->cognome=strdup(cognome);
	s->matricola=strdup(matricola);
	return s;
}

char* get_nome(Studente s)
{
	return s->nome;
}

char* get_cognome(Studente s)
{
	return s->cognome;
}

char* get_matricola(Studente s)
{
	return s->matricola;
}
