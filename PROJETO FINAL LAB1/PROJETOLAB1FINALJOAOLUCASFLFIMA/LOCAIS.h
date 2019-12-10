#ifndef LOCAIS_H_INCLUDED
#define LOCAIS_H_INCLUDED
#include "STRUCTS.h"


void inserirAud1(LISTA10 *liAud1, AUDITORIO1 aud1, CONGRESSISTA con, PALESTRANTE pal);
void mostrarlab1(LISTA16 *liLab1, LISTA1 *liC, LISTA2 *liO, LISTA3 *liG, CURSO *c, OFICINA *o, GRUPOS *g);
void mostrarlab2(LISTA17 *liLab2, LISTA1 *liC, LISTA2 *liO, LISTA3 *liG, CURSO *c, OFICINA *o, GRUPOS *g);
void mostrarsala1(LISTA13 *liSala1,LISTA1 *liC, LISTA2 *liO, LISTA3 *liG, CURSO *c, OFICINA *o, GRUPOS *g);
void mostrarsala2(LISTA14 *liSala2,LISTA1 *liC, LISTA2 *liO, LISTA3 *liG, CURSO *c, OFICINA *o, GRUPOS *g);
void mostrarsala3(LISTA15 *liSala3,LISTA1 *liC, LISTA2 *liO, LISTA3 *liG, CURSO *c, OFICINA *o, GRUPOS *g);
void mostraraud1(LISTA10 *liAud1, LISTA *liP, LISTA1 *liC, LISTA2 *liO, LISTA3 *liG, PALESTRA *p, CURSO *c, OFICINA *o, GRUPOS *g);
void mostraraud2(LISTA11 *liAud2, LISTA *liP, LISTA1 *liC, LISTA2 *liO, LISTA3 *liG, PALESTRA *p, CURSO *c, OFICINA *o, GRUPOS *g);
void mostraraud3(LISTA12 *liAud3, LISTA1 *liC, LISTA2 *liO, LISTA3 *liG, GRUPOS *g, OFICINA *o, CURSO *c);
void inserirAud2(LISTA11 *liAud2, AUDITORIO2 aud2, CONGRESSISTA con, PALESTRANTE pal);
void inserirAud3(LISTA12 *liAud3, AUDITORIO3 aud3, CONGRESSISTA con, PALESTRANTE pal);
void inserirsala1(LISTA13 *liSala1, SALA1 sala1, CONGRESSISTA con, PALESTRANTE pal);
void inserirsala2(LISTA14 *liSala2, SALA2 sala2, CONGRESSISTA con, PALESTRANTE pal);
void inserirsala3(LISTA15 *liSala3, SALA3 sala3, CONGRESSISTA con, PALESTRANTE pal);
void inserirLab1(LISTA16 *liLab1, LAB1 lab1, CONGRESSISTA con, PALESTRANTE pal);
void inserirLab2(LISTA17 *liLab2, LAB2 lab2, CONGRESSISTA con, PALESTRANTE pal);
void Auditorio1(AUDITORIO1 *aud1);
void Auditorio2(AUDITORIO2 *aud2);
void Auditorio3(AUDITORIO3 *aud3);
void Sala1(SALA1 *sala1);
void Sala2(SALA2 *sala2);
void Sala3(SALA3 *sala3);
void Laboratorio1(LAB1 *lab1);
void Laboratorio2(LAB2 *lab2);

#endif // LOCAIS_H_INCLUDED
