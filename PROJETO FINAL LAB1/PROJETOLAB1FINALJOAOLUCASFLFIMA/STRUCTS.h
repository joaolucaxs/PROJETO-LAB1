#ifndef STRUCTS_H_INCLUDED
#define STRUCTS_H_INCLUDED

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <windows.h>
#include <locale.h>
#include <time.h>
#include <conio.h>

typedef struct auditorio1
{
    int id;
    int nome[16];
} AUDITORIO1;

typedef struct auditorio2
{
    int id;
    int nome[16];
} AUDITORIO2;

typedef struct auditorio3
{
    int id;
    int nome[16];
} AUDITORIO3;

typedef struct sala1
{
    int id;
    int nome[16];
} SALA1;

typedef struct sala2
{
    int id;
    int nome[16];
} SALA2;

typedef struct sala3
{
    int id;
    int nome[16];
} SALA3;

typedef struct lab1
{
    int id;
    int nome[16];
} LAB1;

typedef struct lab2
{
    int id;
    int nome[16];
} LAB2;

typedef struct elemento10
{
    AUDITORIO1 dados;
    struct elemento *ant;
    struct elemento *prox;
} ELEM_AUDITORIO1;

typedef struct
{
    ELEM_AUDITORIO1 *inicio;
} LISTA10;

typedef struct elemento11
{
    AUDITORIO2 dados;
    struct elemento *ant;
    struct elemento *prox;
} ELEM_AUDITORIO2;

typedef struct
{
    ELEM_AUDITORIO2 *inicio;
} LISTA11;

typedef struct elemento12
{
    AUDITORIO3 dados;
    struct elemento *ant;
    struct elemento *prox;
} ELEM_AUDITORIO3;

typedef struct
{
    ELEM_AUDITORIO3 *inicio;
} LISTA12;

typedef struct elemento13
{
    SALA1 dados;
    struct elemento *ant;
    struct elemento *prox;
} ELEM_SALA1;

typedef struct
{
    ELEM_SALA1 *inicio;
} LISTA13;

typedef struct elemento14
{
    SALA2 dados;
    struct elemento *ant;
    struct elemento *prox;
} ELEM_SALA2;

typedef struct
{
    ELEM_SALA2 *inicio;
} LISTA14;

typedef struct elemento15
{
    SALA3 dados;
    struct elemento *ant;
    struct elemento *prox;
} ELEM_SALA3;

typedef struct
{
    ELEM_SALA3 *inicio;
} LISTA15;

typedef struct elemento16
{
    LAB1 dados;
    struct elemento *ant;
    struct elemento *prox;
} ELEM_LAB1;

typedef struct
{
    ELEM_LAB1 *inicio;
} LISTA16;

typedef struct elemento17
{
    LAB2 dados;
    struct elemento *ant;
    struct elemento *prox;
} ELEM_LAB2;

typedef struct
{
    ELEM_LAB2 *inicio;
} LISTA17;

typedef struct palestra
{
    int capacidade[150];
    char local[16];
    int carga_horaria;
    char horario[6];
    char tema[16];
} PALESTRA;

typedef struct palestrante
{
    char evento[16];
    char nome[16];
    int id;
} PALESTRANTE;

typedef struct organizador
{
    char nome[16];
    int id;
} ORGANIZADOR;

typedef struct congressista
{
    char evento[16];
    char nome[16];
    int id;
} CONGRESSISTA;

typedef struct elemento5
{
    ORGANIZADOR dados;
    struct elemento *ant;
    struct elemento *prox;
} ELEM_ORGANIZADOR;

typedef struct elemento4
{
    PALESTRANTE dados;
    struct elemento *ant;
    struct elemento *prox;
} ELEM_PALESTRANTE;

typedef struct elemento6
{
    CONGRESSISTA dados;
    struct elemento *ant;
    struct elemento *prox;
} ELEM_CONGRESSISTA;


typedef struct grupo
{
    char local[16];
    int carga_horaria;
    char horario[6];
    char tema[16];
} GRUPOS;

typedef struct curso
{
    char local[16];
    int carga_horaria;
    char horario[6];
    char tema[16];

} CURSO;

typedef struct oficina
{
    char local[16];
    char horario[6];
    int carga_horaria;
    char tema[16];
} OFICINA;


typedef struct elemento
{
    PALESTRA dados;
    struct elemento *ant;
    struct elemento *prox;
} ELEM_PALESTRA;

typedef struct elemento1
{
    CURSO dados;
    struct elemento *ant;
    struct elemento *prox;
} ELEM_CURSO;

typedef struct elemento2
{
    OFICINA dados;
    struct elemento *ant;
    struct elemento *prox;
} ELEM_OFICINA;

typedef struct elemento3
{
    GRUPOS dados;
    struct elemento *ant;
    struct elemento *prox;
} ELEM_GRUPOS;

typedef struct
{
    ELEM_PALESTRANTE *inicio;
} LISTA4;
typedef struct
{
    ELEM_CONGRESSISTA *inicio;
} LISTA6;

typedef struct
{
    ELEM_ORGANIZADOR *inicio;
} LISTA5;

typedef struct
{
    ELEM_CURSO *inicio;
} LISTA1;

typedef struct
{
    ELEM_PALESTRA *inicio;
} LISTA;

typedef struct
{
    ELEM_GRUPOS *inicio;
} LISTA3;

typedef struct
{
    ELEM_OFICINA *inicio;
} LISTA2;

#endif // STRUCTS_H_INCLUDED
