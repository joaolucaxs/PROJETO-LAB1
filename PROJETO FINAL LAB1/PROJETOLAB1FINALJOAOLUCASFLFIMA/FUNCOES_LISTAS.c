#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <windows.h>
#include <locale.h>
#include <time.h>
#include <conio.h>
#include "STRUCTS.h"
#include "LOCAIS.h"
#include "EVENTOS.h"
#include "PESSOAS.h"

void liberarPALESTRA(LISTA *liP)
{
    if(liP !=NULL)
    {
        ELEM_PALESTRA * aux;
        while(liP->inicio!=NULL)
        {
            aux = liP->inicio;
            liP->inicio = liP->inicio->prox;
            free(aux);
        }
        free(liP);
    }
}
void liberarCURSO(LISTA1 *liC)
{
    if(liC !=NULL)
    {
        ELEM_CURSO * aux;
        while(liC->inicio!=NULL)
        {
            aux = liC->inicio;
            liC->inicio = liC->inicio->prox;
            free(aux);
        }
        free(liC);
    }
}
void liberarGRUPOS(LISTA3 *liG)
{
    if(liG !=NULL)
    {
        ELEM_GRUPOS * aux;
        while(liG->inicio!=NULL)
        {
            aux = liG->inicio;
            liG->inicio = liG->inicio->prox;
            free(aux);
        }
        free(liG);
    }
}
void liberarOFICINA(LISTA2 *liO)
{
    if(liO !=NULL)
    {
        ELEM_OFICINA * aux;
        while(liO->inicio!=NULL)
        {
            aux = liO->inicio;
            liO->inicio = liO->inicio->prox;
            free(aux);
        }
        free(liO);
    }
}
void liberarPALESTRANTE(LISTA4 *liPal)
{
    if(liPal !=NULL)
    {
        ELEM_PALESTRANTE * aux;
        while(liPal->inicio!=NULL)
        {
            aux = liPal->inicio;
            liPal->inicio = liPal->inicio->prox;
            free(aux);
        }
        free(liPal);
    }
}
void liberarORGANIZADOR(LISTA5 *liOrg)
{
    if(liOrg !=NULL)
    {
        ELEM_ORGANIZADOR * aux;
        while(liOrg->inicio!=NULL)
        {
            aux = liOrg->inicio;
            liOrg->inicio = liOrg->inicio->prox;
            free(aux);
        }
        free(liOrg);
    }
}
void liberarCONGRESSISTA(LISTA6 *liCon)
{
    if(liCon !=NULL)
    {
        ELEM_CONGRESSISTA * aux;
        while(liCon->inicio!=NULL)
        {
            aux = liCon->inicio;
            liCon->inicio = liCon->inicio->prox;
            free(aux);
        }
        free(liCon);
    }
}
void liberarAUD1(LISTA10 *liAud1)
{
    if(liAud1 !=NULL)
    {
        ELEM_AUDITORIO1 * aux;
        while(liAud1->inicio!=NULL)
        {
            aux = liAud1->inicio;
            liAud1->inicio = liAud1->inicio->prox;
            free(aux);
        }
        free(liAud1);
    }
}
void liberarAUD2(LISTA11 *liAud2)
{
    if(liAud2 !=NULL)
    {
        ELEM_AUDITORIO2 * aux;
        while(liAud2->inicio!=NULL)
        {
            aux = liAud2->inicio;
            liAud2->inicio = liAud2->inicio->prox;
            free(aux);
        }
        free(liAud2);
    }
}
void liberarAUD3(LISTA12 *liAud3)
{
    if(liAud3 !=NULL)
    {
        ELEM_AUDITORIO3 * aux;
        while(liAud3->inicio!=NULL)
        {
            aux = liAud3->inicio;
            liAud3->inicio = liAud3->inicio->prox;
            free(aux);
        }
        free(liAud3);
    }
}
void liberarSALA1(LISTA13 *liSala1)
{
    if(liSala1 !=NULL)
    {
        ELEM_SALA1 * aux;
        while(liSala1->inicio!=NULL)
        {
            aux = liSala1->inicio;
            liSala1->inicio = liSala1->inicio->prox;
            free(aux);
        }
        free(liSala1);
    }
}
void liberarSALA2(LISTA14 *liSala2)
{
    if(liSala2 !=NULL)
    {
        ELEM_SALA2 * aux;
        while(liSala2->inicio!=NULL)
        {
            aux = liSala2->inicio;
            liSala2->inicio = liSala2->inicio->prox;
            free(aux);
        }
        free(liSala2);
    }
}
void liberarSALA3(LISTA15 *liSala3)
{
    if(liSala3 !=NULL)
    {
        ELEM_SALA3 * aux;
        while(liSala3->inicio!=NULL)
        {
            aux = liSala3->inicio;
            liSala3->inicio = liSala3->inicio->prox;
            free(aux);
        }
        free(liSala3);
    }
}
void liberarLAB1(LISTA16 *liLab1)
{
    if(liLab1 !=NULL)
    {
        ELEM_LAB1 * aux;
        while(liLab1->inicio!=NULL)
        {
            aux = liLab1->inicio;
            liLab1->inicio = liLab1->inicio->prox;
            free(aux);
        }
        free(liLab1);
    }
}
void liberarLAB2(LISTA17 *liLab2)
{
    if(liLab2 !=NULL)
    {
        ELEM_LAB2 * aux;
        while(liLab2->inicio!=NULL)
        {
            aux = liLab2->inicio;
            liLab2->inicio = liLab2->inicio->prox;
            free(aux);
        }
        free(liLab2);
    }
}
