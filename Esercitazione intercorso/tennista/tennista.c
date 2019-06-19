#include"tennista.h"
#include"string.h"
#include"stdlib.h"
struct tennista
{
	char* nome;
	char* data_nascita;
	int categoria;
};

char* get_nome(Tennista t)
{
	return t->nome;
}

char* get_data(Tennista t)
{
	return t->data_nascita;
}

int get_categoria(Tennista t)
{
	return t->categoria;
}

Tennista new_tennista(char* nome, char* data, int categoria)
{
	Tennista t=malloc(sizeof(struct tennista));
	t->nome=strdup(nome);
	t->data_nascita=strdup(data);
	t->categoria=categoria;
	return t;
}	
