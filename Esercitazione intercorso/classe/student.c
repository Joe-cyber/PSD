#include"student.h"
#include<stdlib.h>
#include<string.h>
struct student
{
	char* nome;
	char* data_nascita;
	char* matricola;
};

Student new_student(char* n,char* d,char* m)
{
	Student s=malloc(sizeof(struct student));
	s->nome=strdup(n);
	s->data_nascita=strdup(d);
	s->matricola=strdup(m);
	return s;
}

char* get_nome(Student s)
{
	return s->nome;
}

char* get_data(Student s)
{
	return s->data_nascita;
}

char* get_matricola(Student s)
{
	return s->matricola;
}
