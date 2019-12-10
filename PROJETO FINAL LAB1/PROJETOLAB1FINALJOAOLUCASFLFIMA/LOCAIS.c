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

void inserirAud1(LISTA10 *liAud1, AUDITORIO1 aud1, CONGRESSISTA con, PALESTRANTE pal)
{
    if(liAud1==NULL)
    {
        printf("\nERRO DE ALOCACAO\n");
    }
    else
    {
        ELEM_AUDITORIO1* novo = (ELEM_AUDITORIO1*) malloc(sizeof(ELEM_AUDITORIO1));
        if(novo != NULL)
        {
            novo->dados= aud1;
            if(liAud1->inicio==NULL)
            {
                novo->prox=NULL;
                novo->ant=NULL;
                liAud1->inicio=novo;
            }
            else
            {
                if(strcmp(liAud1->inicio->dados.nome,novo->dados.nome)>0)
                {
                    novo->ant=NULL;
                    novo->prox=liAud1->inicio;
                    liAud1->inicio->ant=novo;
                    liAud1->inicio=novo;
                }
                else
                {
                    ELEM_AUDITORIO1 *ante,*aux=liAud1->inicio;
                    while((aux!=NULL)&&(strcmp(aux->dados.nome,novo->dados.nome)<=0))
                    {
                        ante=aux;
                        aux=aux->prox;
                    }
                    ante->prox=novo;
                    novo->ant=ante;
                    novo->prox=aux;
                    if(aux!=NULL)
                        aux->ant=novo;
                }
                printf("AUDITORIO 1 INSERIDO");
            }
        }
        else
        {
            printf("\nERRO DE ALOCACAO\n");
        }
    }
}
void mostrarlab1(LISTA16 *liLab1, LISTA1 *liC, LISTA2 *liO, LISTA3 *liG, CURSO *c, OFICINA *o, GRUPOS *g)
{
    if(liLab1 == NULL)
    {
        printf("\nERRO DE ALOCACAO\n");
    }
    else
    {
        if(liLab1->inicio==NULL)
        {
            printf("\nLABORATORIO NAO CADASTRADO\n");
        }
        else
        {
            ELEM_LAB1 *aux9= liLab1->inicio;
            ELEM_CURSO* aux2 = liC->inicio;
            ELEM_OFICINA* aux3 = liO->inicio;
            ELEM_GRUPOS* aux4 = liG->inicio;
            printf("\n\nLABORATORIO 1 \n");
            printf("ID: %d\n\n",aux9->dados.id);

            while(aux9!=NULL)
            {
                if(strcmp(g->local, "LABORATORIO 1")==0)
                {
                    printf("\tGRUPOS\n");
                    while(aux4 !=NULL)
                    {
                        printf("\nEVENTO: %s\n", aux4->dados.tema);
                        printf("HORARIO: %s\n", aux4->dados.horario);
                        printf("CARGA HORARIA: %d\n\n", aux4->dados.carga_horaria);
                        aux4=aux4->prox;
                    }
                }

                aux9=aux9->prox;
            }

            ELEM_LAB1 *aux10=liLab1->inicio;
            while(aux10 != NULL)
            {
                if(strcmp(c->local, "LABORATORIO 1")==0)
                {
                    printf("\tCURSOS\n");
                    while(aux2 !=NULL)
                    {
                        printf("\nEVENTO: %s\n", aux2->dados.tema);
                        printf("HORARIO: %s\n", aux2->dados.horario);
                        printf("CARGA HORARIA: %d\n\n", aux2->dados.carga_horaria);
                        aux2=aux2->prox;
                    }
                }
                aux10 = aux10->prox;
            }
            ELEM_LAB1 *aux11=liLab1->inicio;
            while(aux11 != NULL)
            {
                if(strcmp(o->local, "LABORATORIO 1")==0)
                {
                    printf("\tOFICINAS\n");
                    while(aux2 !=NULL)
                    {
                        printf("\nEVENTO: %s\n", aux3->dados.tema);
                        printf("HORARIO: %s\n", aux3->dados.horario);
                        printf("CARGA HORARIA: %d\n\n", aux3->dados.carga_horaria);
                        aux3=aux3->prox;
                    }
                }
                aux11 = aux11->prox;
            }
        }
    }
}
void mostrarlab2(LISTA17 *liLab2, LISTA1 *liC, LISTA2 *liO, LISTA3 *liG, CURSO *c, OFICINA *o, GRUPOS *g)
{
    if(liLab2 == NULL)
    {
        printf("\nERRO DE ALOCACAO\n");
    }
    else
    {
        if(liLab2->inicio==NULL)
        {
            printf("\nLABORATORIO NAO CADASTRADO\n");
        }
        else
        {
            ELEM_LAB2 *aux9= liLab2->inicio;
            ELEM_CURSO* aux2 = liC->inicio;
            ELEM_OFICINA* aux3 = liO->inicio;
            ELEM_GRUPOS* aux4 = liG->inicio;
            printf("\n\nLABORATORIO 2 \n");
            printf("ID: %d\n\n",aux9->dados.id);

            while(aux9!=NULL)
            {
                if(strcmp(g->local, "LABORATORIO 2")==0)
                {
                    printf("\tGRUPOS\n");
                    while(aux4 !=NULL)
                    {
                        printf("\nEVENTO: %s\n", aux4->dados.tema);
                        printf("HORARIO: %s\n", aux4->dados.horario);
                        printf("CARGA HORARIA: %d\n\n", aux4->dados.carga_horaria);
                        aux4=aux4->prox;
                    }
                }

                aux9=aux9->prox;
            }

            ELEM_LAB2 *aux10=liLab2->inicio;
            while(aux10 != NULL)
            {
                if(strcmp(c->local, "LABORATORIO 2")==0)
                {
                    printf("\tCURSOS\n");
                    while(aux2 !=NULL)
                    {
                        printf("\nEVENTO: %s\n", aux2->dados.tema);
                        printf("HORARIO: %s\n", aux2->dados.horario);
                        printf("CARGA HORARIA: %d\n\n", aux2->dados.carga_horaria);
                        aux2=aux2->prox;
                    }
                }
                aux10 = aux10->prox;
            }
            ELEM_LAB2 *aux11=liLab2->inicio;
            while(aux11 != NULL)
            {
                if(strcmp(o->local, "LABORATORIO 2")==0)
                {
                    printf("\tOFICINAS\n");
                    while(aux2 !=NULL)
                    {
                        printf("\nEVENTO: %s\n", aux3->dados.tema);
                        printf("HORARIO: %s\n", aux3->dados.horario);
                        printf("CARGA HORARIA: %d\n\n", aux3->dados.carga_horaria);
                        aux3=aux3->prox;
                    }
                }
                aux11 = aux11->prox;
            }
        }
    }
}
void mostrarsala1(LISTA13 *liSala1,LISTA1 *liC, LISTA2 *liO, LISTA3 *liG, CURSO *c, OFICINA *o, GRUPOS *g)
{
    if(liSala1 == NULL)
    {
        printf("\nERRO DE ALOCACAO\n");
    }
    else
    {
        if(liSala1->inicio==NULL)
        {
            printf("\nSALA NAO CADASTRADA\n");
        }
        else
        {
            ELEM_SALA1 *aux9= liSala1->inicio;
            ELEM_CURSO* aux2 = liC->inicio;
            ELEM_OFICINA* aux3 = liO->inicio;
            ELEM_GRUPOS* aux4 = liG->inicio;
            printf("\n\nSALA 1 \n");
            printf("ID: %d\n\n",aux9->dados.id);

            while(aux9!=NULL)
            {
                if(strcmp(g->local, "SALA 1")==0)
                {
                    printf("\tGRUPOS\n");
                    while(aux4 !=NULL)
                    {
                        printf("\nEVENTO: %s\n", aux4->dados.tema);
                        printf("HORARIO: %s\n", aux4->dados.horario);
                        printf("CARGA HORARIA: %d\n\n", aux4->dados.carga_horaria);
                        aux4=aux4->prox;
                    }
                }

                aux9=aux9->prox;
            }

            ELEM_SALA1 *aux10=liSala1->inicio;
            while(aux10 != NULL)
            {
                if(strcmp(c->local, "SALA 1")==0)
                {
                    printf("\tCURSOS\n");
                    while(aux2 !=NULL)
                    {
                        printf("\nEVENTO: %s\n", aux2->dados.tema);
                        printf("HORARIO: %s\n", aux2->dados.horario);
                        printf("CARGA HORARIA: %d\n\n", aux2->dados.carga_horaria);
                        aux2=aux2->prox;
                    }
                }
                aux10 = aux10->prox;
            }
            ELEM_SALA1 *aux11=liSala1->inicio;
            while(aux11 != NULL)
            {
                if(strcmp(o->local, "SALA 1")==0)
                {
                    printf("\tOFICINAS\n");
                    while(aux2 !=NULL)
                    {
                        printf("\nEVENTO: %s\n", aux3->dados.tema);
                        printf("HORARIO: %s\n", aux3->dados.horario);
                        printf("CARGA HORARIA: %d\n\n", aux3->dados.carga_horaria);
                        aux3=aux3->prox;
                    }
                }
                aux11 = aux11->prox;
            }
        }
    }
}
void mostrarsala2(LISTA14 *liSala2,LISTA1 *liC, LISTA2 *liO, LISTA3 *liG, CURSO *c, OFICINA *o, GRUPOS *g)
{
    int i;
    if(liSala2 == NULL)
    {
        printf("\nERRO DE ALOCACAO\n");
    }
    else
    {
        if(liSala2->inicio==NULL)
        {
            printf("\nSALA NAO CADASTRADA\n");
        }
        else
        {
            ELEM_SALA2 *aux9= liSala2->inicio;
            ELEM_CURSO* aux2 = liC->inicio;
            ELEM_OFICINA* aux3 = liO->inicio;
            ELEM_GRUPOS* aux4 = liG->inicio;
            printf("\n\nSALA 2 \n");
            printf("ID: %d\n\n",aux9->dados.id);

            while(aux9!=NULL)
            {
                if(strcmp(g->local, "SALA 2")==0)
                {
                    printf("\tGRUPOS\n");
                    while(aux4 !=NULL)
                    {
                        printf("\nEVENTO: %s\n", aux4->dados.tema);
                        printf("HORARIO: %s\n", aux4->dados.horario);
                        printf("CARGA HORARIA: %d\n\n", aux4->dados.carga_horaria);
                        aux4=aux4->prox;
                    }
                }

                aux9=aux9->prox;
            }

            ELEM_SALA2 *aux10=liSala2->inicio;
            while(aux10 != NULL)
            {
                if(strcmp(c->local, "SALA 2")==0)
                {
                    printf("\tCURSOS\n");
                    while(aux2 !=NULL)
                    {
                        printf("\nEVENTO: %s\n", aux2->dados.tema);
                        printf("HORARIO: %s\n", aux2->dados.horario);
                        printf("CARGA HORARIA: %d\n\n", aux2->dados.carga_horaria);
                        aux2=aux2->prox;
                    }
                }
                aux10 = aux10->prox;
            }
            ELEM_SALA2 *aux11=liSala2->inicio;
            while(aux11 != NULL)
            {
                if(strcmp(o->local, "SALA 2")==0)
                {
                    printf("\tOFICINAS\n");
                    while(aux2 !=NULL)
                    {
                        printf("\nEVENTO: %s\n", aux3->dados.tema);
                        printf("HORARIO: %s\n", aux3->dados.horario);
                        printf("CARGA HORARIA: %d\n\n", aux3->dados.carga_horaria);
                        aux3=aux3->prox;
                    }
                }
                aux11 = aux11->prox;
            }
        }
    }
}
void mostrarsala3(LISTA15 *liSala3,LISTA1 *liC, LISTA2 *liO, LISTA3 *liG, CURSO *c, OFICINA *o, GRUPOS *g)
{
    int i;
    if(liSala3 == NULL)
    {
        printf("\nERRO DE ALOCACAO\n");
    }
    else
    {
        if(liSala3->inicio==NULL)
        {
            printf("\nSALA NAO CADASTRADO\n");
        }
        else
        {
            ELEM_SALA3 *aux9= liSala3->inicio;
            ELEM_CURSO* aux2 = liC->inicio;
            ELEM_OFICINA* aux3 = liO->inicio;
            ELEM_GRUPOS* aux4 = liG->inicio;
            printf("\n\nSALA 3 \n");
            printf("ID: %d\n\n",aux9->dados.id);

            while(aux9!=NULL)
            {
                if(strcmp(g->local, "SALA 3")==0)
                {
                    printf("\tGRUPOS\n");
                    while(aux4 !=NULL)
                    {
                        printf("\nEVENTO: %s\n", aux4->dados.tema);
                        printf("HORARIO: %s\n", aux4->dados.horario);
                        printf("CARGA HORARIA: %d\n\n", aux4->dados.carga_horaria);
                        aux4=aux4->prox;
                    }
                }

                aux9=aux9->prox;
            }

            ELEM_SALA3 *aux10=liSala3->inicio;
            while(aux10 != NULL)
            {
                if(strcmp(c->local, "SALA 3")==0)
                {
                    printf("\tCURSOS\n");
                    while(aux2 !=NULL)
                    {
                        printf("\nEVENTO: %s\n", aux2->dados.tema);
                        printf("HORARIO: %s\n", aux2->dados.horario);
                        printf("CARGA HORARIA: %d\n\n", aux2->dados.carga_horaria);
                        aux2=aux2->prox;
                    }
                }
                aux10 = aux10->prox;
            }
            ELEM_SALA3 *aux11=liSala3->inicio;
            while(aux11 != NULL)
            {
                if(strcmp(o->local, "SALA 3")==0)
                {
                    printf("\tOFICINAS\n");
                    while(aux2 !=NULL)
                    {
                        printf("\nEVENTO: %s\n", aux3->dados.tema);
                        printf("HORARIO: %s\n", aux3->dados.horario);
                        printf("CARGA HORARIA: %d\n\n", aux3->dados.carga_horaria);
                        aux3=aux3->prox;
                    }
                }
                aux11 = aux11->prox;
            }
        }
    }
}
void mostraraud1(LISTA10 *liAud1, LISTA *liP, LISTA1 *liC, LISTA2 *liO, LISTA3 *liG, PALESTRA *p, CURSO *c, OFICINA *o, GRUPOS *g)
{
    if(liAud1 == NULL)
    {
        printf("\nERRO DE ALOCACAO\n");
    }
    else
    {
        if(liAud1->inicio==NULL)
        {
            printf("\nAUDITORIO NAO CADASTRADO\n");
        }
        else
        {
            ELEM_PALESTRA* aux1 = liP->inicio;
            ELEM_AUDITORIO1* aux = liAud1->inicio;
            ELEM_CURSO* aux2 = liC->inicio;
            ELEM_OFICINA* aux3 = liO->inicio;
            ELEM_GRUPOS* aux4 = liG->inicio;
            printf("\n\nAUDITORIO 1 \n");
            printf("ID: %d\n\n",aux->dados.id);

            while(aux != NULL)
            {
                if(strcmp(p->local, "AUDITORIO 1")==0)
                {
                    printf("\tPALESTRAS\n");
                    while(aux1 !=NULL)
                    {
                        printf("\nEVENTO: %s\n", aux1->dados.tema);
                        printf("HORARIO: %s\n", aux1->dados.horario);
                        printf("CARGA HORARIA: %d\n\n", aux1->dados.carga_horaria);
                        aux1=aux1->prox;
                    }
                }
                aux=aux->prox;
            }

            ELEM_AUDITORIO1 *aux9= liAud1->inicio;
            while(aux9!=NULL)
            {
                if(strcmp(g->local, "AUDITORIO 1")==0)
                {
                    printf("\tGRUPOS\n");
                    while(aux4 !=NULL)
                    {
                        printf("\nEVENTO: %s\n", aux4->dados.tema);
                        printf("HORARIO: %s\n", aux4->dados.horario);
                        printf("CARGA HORARIA: %d\n\n", aux4->dados.carga_horaria);
                        aux4=aux4->prox;
                    }
                }

                aux9=aux9->prox;
            }

            ELEM_AUDITORIO1 *aux10=liAud1->inicio;
            while(aux10 != NULL)
            {
                if(strcmp(c->local, "AUDITORIO 1")==0)
                {
                    printf("\tCURSOS\n");
                    while(aux2 !=NULL)
                    {
                        printf("\nEVENTO: %s\n", aux2->dados.tema);
                        printf("HORARIO: %s\n", aux2->dados.horario);
                        printf("CARGA HORARIA: %d\n\n", aux2->dados.carga_horaria);
                        aux2=aux2->prox;
                    }
                }
                aux10 = aux10->prox;
            }
            ELEM_AUDITORIO1 *aux11=liAud1->inicio;
            while(aux11 != NULL)
            {
                if(strcmp(o->local, "AUDITORIO 1")==0)
                {
                    printf("\tOFICINAS\n");
                    while(aux3 !=NULL)
                    {
                        printf("\nEVENTO: %s\n", aux3->dados.tema);
                        printf("HORARIO: %s\n", aux3->dados.horario);
                        printf("CARGA HORARIA: %d\n\n", aux3->dados.carga_horaria);
                        aux3=aux3->prox;
                    }
                }
                aux11 = aux11->prox;
            }
        }
    }
}
void mostraraud2(LISTA11 *liAud2, LISTA *liP, LISTA1 *liC, LISTA2 *liO, LISTA3 *liG, PALESTRA *p, CURSO *c, OFICINA *o, GRUPOS *g)
{
    if(liAud2 == NULL)
    {
        printf("\nERRO DE ALOCACAO\n");
    }
    else
    {
        if(liAud2->inicio==NULL)
        {
            printf("\nAUDITORIO NAO CADASTRADO\n");
        }
        else
        {
            ELEM_PALESTRA* aux1 = liP->inicio;
            ELEM_AUDITORIO2* aux = liAud2->inicio;
            ELEM_CURSO* aux2 = liC->inicio;
            ELEM_OFICINA* aux3 = liO->inicio;
            ELEM_GRUPOS* aux4 = liG->inicio;
            printf("\n\nAUDITORIO 2 \n");
            printf("ID: %d\n\n",aux->dados.id);

            while(aux != NULL)
            {
                if(strcmp(p->local, "AUDITORIO 2")==0)
                {
                    printf("\tPALESTRAS\n");
                    while(aux1 !=NULL)
                    {
                        printf("\nEVENTO: %s\n", aux1->dados.tema);
                        printf("HORARIO: %s\n", aux1->dados.horario);
                        printf("CARGA HORARIA: %d\n\n", aux1->dados.carga_horaria);
                        aux1=aux1->prox;
                    }
                }
                aux=aux->prox;
            }

            ELEM_AUDITORIO2 *aux9= liAud2->inicio;
            while(aux9!=NULL)
            {
                if(strcmp(g->local, "AUDITORIO 2")==0)
                {
                    printf("\tGRUPOS\n");
                    while(aux4 !=NULL)
                    {
                        printf("\nEVENTO: %s\n", aux4->dados.tema);
                        printf("HORARIO: %s\n", aux4->dados.horario);
                        printf("CARGA HORARIA: %d\n\n", aux4->dados.carga_horaria);
                        aux4=aux4->prox;
                    }
                }

                aux9=aux9->prox;
            }

            ELEM_AUDITORIO2 *aux10=liAud2->inicio;
            while(aux10 != NULL)
            {
                if(strcmp(c->local, "AUDITORIO 2")==0)
                {
                    printf("\tCURSOS\n");
                    while(aux2 !=NULL)
                    {
                        printf("\nEVENTO: %s\n", aux2->dados.tema);
                        printf("HORARIO: %s\n", aux2->dados.horario);
                        printf("CARGA HORARIA: %d\n\n", aux2->dados.carga_horaria);
                        aux2=aux2->prox;
                    }
                }
                aux10 = aux10->prox;
            }
            ELEM_AUDITORIO2 *aux11=liAud2->inicio;
            while(aux11 != NULL)
            {
                if(strcmp(o->local, "AUDITORIO 2")==0)
                {
                    printf("\tOFICINAS\n");
                    while(aux2 !=NULL)
                    {
                        printf("\nEVENTO: %s\n", aux3->dados.tema);
                        printf("HORARIO: %s\n", aux3->dados.horario);
                        printf("CARGA HORARIA: %d\n\n", aux3->dados.carga_horaria);
                        aux3=aux3->prox;
                    }
                }
                aux11 = aux11->prox;
            }
        }
    }
}
void mostraraud3(LISTA12 *liAud3, LISTA1 *liC, LISTA2 *liO, LISTA3 *liG, GRUPOS *g, OFICINA *o, CURSO *c)
{
    if(liAud3 == NULL)
    {
        printf("\nERRO DE ALOCACAO\n");
    }
    else
    {
        if(liAud3->inicio==NULL)
        {
            printf("\nAUDITORIO NAO CADASTRADO\n");
        }
        else
        {
            ELEM_CURSO* aux2 = liC->inicio;
            ELEM_OFICINA* aux3 = liO->inicio;
            ELEM_GRUPOS* aux4 = liG->inicio;
            ELEM_AUDITORIO3 *aux9= liAud3->inicio;
            printf("\n\nAUDITORIO 3 \n");
            printf("ID: %d\n\n",aux9->dados.id);
            while(aux9!=NULL)
            {
                if(strcmp(g->local, "AUDITORIO 3")==0)
                {
                    printf("\tGRUPOS\n");
                    while(aux4 !=NULL)
                    {
                        printf("\nEVENTO: %s\n", aux4->dados.tema);
                        printf("HORARIO: %s\n", aux4->dados.horario);
                        printf("CARGA HORARIA: %d\n\n", aux4->dados.carga_horaria);
                        aux4=aux4->prox;
                    }
                }

                aux9=aux9->prox;
            }

            ELEM_AUDITORIO3 *aux10=liAud3->inicio;
            while(aux10 != NULL)
            {
                if(strcmp(c->local, "AUDITORIO 3")==0)
                {
                    printf("\tCURSOS\n");
                    while(aux2 !=NULL)
                    {
                        printf("\nEVENTO: %s\n", aux2->dados.tema);
                        printf("HORARIO: %s\n", aux2->dados.horario);
                        printf("CARGA HORARIA: %d\n\n", aux2->dados.carga_horaria);
                        aux2=aux2->prox;
                    }
                }
                aux10 = aux10->prox;
            }
            ELEM_AUDITORIO3 *aux11=liAud3->inicio;
            while(aux11 != NULL)
            {
                if(strcmp(o->local, "AUDITORIO 3")==0)
                {
                    printf("\tOFICINAS\n");
                    while(aux2 !=NULL)
                    {
                        printf("\nEVENTO: %s\n", aux3->dados.tema);
                        printf("HORARIO: %s\n", aux3->dados.horario);
                        printf("CARGA HORARIA: %d\n\n", aux3->dados.carga_horaria);
                        aux3=aux3->prox;
                    }
                }
                aux11 = aux11->prox;
            }
        }
    }
}
void inserirAud2(LISTA11 *liAud2, AUDITORIO2 aud2, CONGRESSISTA con, PALESTRANTE pal)
{
    if(liAud2==NULL)
    {
        printf("\nERRO DE ALOCACAO\n");
    }
    else
    {
        ELEM_AUDITORIO2* novo = (ELEM_AUDITORIO2*) malloc(sizeof(ELEM_AUDITORIO2));
        if(novo != NULL)
        {
            novo->dados= aud2;
            if(liAud2->inicio==NULL)
            {
                novo->prox=NULL;
                novo->ant=NULL;
                liAud2->inicio=novo;
            }
            else
            {
                if(strcmp(liAud2->inicio->dados.nome,novo->dados.nome)>0)
                {
                    novo->ant=NULL;
                    novo->prox=liAud2->inicio;
                    liAud2->inicio->ant=novo;
                    liAud2->inicio=novo;
                }
                else
                {
                    ELEM_AUDITORIO2 *ante,*aux=liAud2->inicio;
                    while((aux!=NULL)&&(strcmp(aux->dados.nome,novo->dados.nome)<=0))
                    {
                        ante=aux;
                        aux=aux->prox;
                    }
                    ante->prox=novo;
                    novo->ant=ante;
                    novo->prox=aux;
                    if(aux!=NULL)
                        aux->ant=novo;
                }
                printf("AUDITORIO 2 INSERIDO");
            }
        }
        else
        {
            printf("\nERRO DE ALOCACAO\n");
        }
    }
}
void inserirAud3(LISTA12 *liAud3, AUDITORIO3 aud3, CONGRESSISTA con, PALESTRANTE pal)
{
    if(liAud3==NULL)
    {
        printf("\nERRO DE ALOCACAO\n");
    }
    else
    {
        ELEM_AUDITORIO3* novo = (ELEM_AUDITORIO3*) malloc(sizeof(ELEM_AUDITORIO3));
        if(novo != NULL)
        {
            novo->dados= aud3;
            if(liAud3->inicio==NULL)
            {
                novo->prox=NULL;
                novo->ant=NULL;
                liAud3->inicio=novo;
            }
            else
            {
                if(strcmp(liAud3->inicio->dados.nome,novo->dados.nome)>0)
                {
                    novo->ant=NULL;
                    novo->prox=liAud3->inicio;
                    liAud3->inicio->ant=novo;
                    liAud3->inicio=novo;
                }
                else
                {
                    ELEM_AUDITORIO3 *ante,*aux=liAud3->inicio;
                    while((aux!=NULL)&&(strcmp(aux->dados.nome,novo->dados.nome)<=0))
                    {
                        ante=aux;
                        aux=aux->prox;
                    }
                    ante->prox=novo;
                    novo->ant=ante;
                    novo->prox=aux;
                    if(aux!=NULL)
                        aux->ant=novo;
                }
                printf("AUDITORIO 3 INSERIDO");
            }
        }
        else
        {
            printf("\nERRO DE ALOCACAO\n");
        }
    }
}
void inserirsala1(LISTA13 *liSala1, SALA1 sala1, CONGRESSISTA con, PALESTRANTE pal)
{
    if(liSala1==NULL)
    {
        printf("\nERRO DE ALOCACAO\n");
    }
    else
    {
        ELEM_SALA1* novo = (ELEM_SALA1*) malloc(sizeof(ELEM_SALA1));
        if(novo != NULL)
        {
            novo->dados= sala1;
            if(liSala1->inicio==NULL)
            {
                novo->prox=NULL;
                novo->ant=NULL;
                liSala1->inicio=novo;
            }
            else
            {
                if(strcmp(liSala1->inicio->dados.nome,novo->dados.nome)>0)
                {
                    novo->ant=NULL;
                    novo->prox=liSala1->inicio;
                    liSala1->inicio->ant=novo;
                    liSala1->inicio=novo;
                }
                else
                {
                    ELEM_SALA1 *ante,*aux=liSala1->inicio;
                    while((aux!=NULL)&&(strcmp(aux->dados.nome,novo->dados.nome)<=0))
                    {
                        ante=aux;
                        aux=aux->prox;
                    }
                    ante->prox=novo;
                    novo->ant=ante;
                    novo->prox=aux;
                    if(aux!=NULL)
                        aux->ant=novo;
                }
                printf("SALA 1 INSERIDA");
            }
        }
        else
        {
            printf("\nERRO DE ALOCACAO\n");
        }
    }
}
void inserirsala2(LISTA14 *liSala2, SALA2 sala2, CONGRESSISTA con, PALESTRANTE pal)
{
    if(liSala2==NULL)
    {
        printf("\nERRO DE ALOCACAO\n");
    }
    else
    {
        ELEM_SALA2* novo = (ELEM_SALA2*) malloc(sizeof(ELEM_SALA2));
        if(novo != NULL)
        {
            novo->dados= sala2;
            if(liSala2->inicio==NULL)
            {
                novo->prox=NULL;
                novo->ant=NULL;
                liSala2->inicio=novo;
            }
            else
            {
                if(strcmp(liSala2->inicio->dados.nome,novo->dados.nome)>0)
                {
                    novo->ant=NULL;
                    novo->prox=liSala2->inicio;
                    liSala2->inicio->ant=novo;
                    liSala2->inicio=novo;
                }
                else
                {
                    ELEM_SALA2 *ante,*aux=liSala2->inicio;
                    while((aux!=NULL)&&(strcmp(aux->dados.nome,novo->dados.nome)<=0))
                    {
                        ante=aux;
                        aux=aux->prox;
                    }
                    ante->prox=novo;
                    novo->ant=ante;
                    novo->prox=aux;
                    if(aux!=NULL)
                        aux->ant=novo;
                }
                printf("SALA 2 INSERIDA");
            }
        }
        else
        {
            printf("\nERRO DE ALOCACAO\n");
        }
    }
}
void inserirsala3(LISTA15 *liSala3, SALA3 sala3, CONGRESSISTA con, PALESTRANTE pal)
{
    if(liSala3==NULL)
    {
        printf("\nERRO DE ALOCACAO\n");
    }
    else
    {
        ELEM_SALA3* novo = (ELEM_SALA3*) malloc(sizeof(ELEM_SALA3));
        if(novo != NULL)
        {
            novo->dados= sala3;
            if(liSala3->inicio==NULL)
            {
                novo->prox=NULL;
                novo->ant=NULL;
                liSala3->inicio=novo;
            }
            else
            {
                if(strcmp(liSala3->inicio->dados.nome,novo->dados.nome)>0)
                {
                    novo->ant=NULL;
                    novo->prox=liSala3->inicio;
                    liSala3->inicio->ant=novo;
                    liSala3->inicio=novo;
                }
                else
                {
                    ELEM_SALA3 *ante,*aux=liSala3->inicio;
                    while((aux!=NULL)&&(strcmp(aux->dados.nome,novo->dados.nome)<=0))
                    {
                        ante=aux;
                        aux=aux->prox;
                    }
                    ante->prox=novo;
                    novo->ant=ante;
                    novo->prox=aux;
                    if(aux!=NULL)
                        aux->ant=novo;
                }
                printf("SALA 3 INSERIDA");
            }
        }
        else
        {
            printf("\nERRO DE ALOCACAO\n");
        }
    }
}
void inserirLab1(LISTA16 *liLab1, LAB1 lab1, CONGRESSISTA con, PALESTRANTE pal)
{
    if(liLab1==NULL)
    {
        printf("\nERRO DE ALOCACAO\n");
    }
    else
    {
        ELEM_LAB1* novo = (ELEM_LAB1*) malloc(sizeof(ELEM_LAB1));
        if(novo != NULL)
        {
            novo->dados= lab1;
            if(liLab1->inicio==NULL)
            {
                novo->prox=NULL;
                novo->ant=NULL;
                liLab1->inicio=novo;
            }
            else
            {
                if(strcmp(liLab1->inicio->dados.nome,novo->dados.nome)>0)
                {
                    novo->ant=NULL;
                    novo->prox=liLab1->inicio;
                    liLab1->inicio->ant=novo;
                    liLab1->inicio=novo;
                }
                else
                {
                    ELEM_LAB1 *ante,*aux=liLab1->inicio;
                    while((aux!=NULL)&&(strcmp(aux->dados.nome,novo->dados.nome)<=0))
                    {
                        ante=aux;
                        aux=aux->prox;
                    }
                    ante->prox=novo;
                    novo->ant=ante;
                    novo->prox=aux;
                    if(aux!=NULL)
                        aux->ant=novo;
                }
                printf("LABORATORIO 1 INSERIDO");
            }
        }
        else
        {
            printf("\nERRO DE ALOCACAO\n");
        }
    }
}
void inserirLab2(LISTA17 *liLab2, LAB2 lab2, CONGRESSISTA con, PALESTRANTE pal)
{
    if(liLab2==NULL)
    {
        printf("\nERRO DE ALOCACAO\n");
    }
    else
    {
        ELEM_LAB2* novo = (ELEM_LAB2*) malloc(sizeof(ELEM_LAB2));
        if(novo != NULL)
        {
            novo->dados= lab2;
            if(liLab2->inicio==NULL)
            {
                novo->prox=NULL;
                novo->ant=NULL;
                liLab2->inicio=novo;
            }
            else
            {
                if(strcmp(liLab2->inicio->dados.nome,novo->dados.nome)>0)
                {
                    novo->ant=NULL;
                    novo->prox=liLab2->inicio;
                    liLab2->inicio->ant=novo;
                    liLab2->inicio=novo;
                }
                else
                {
                    ELEM_LAB2 *ante,*aux=liLab2->inicio;
                    while((aux!=NULL)&&(strcmp(aux->dados.nome,novo->dados.nome)<=0))
                    {
                        ante=aux;
                        aux=aux->prox;
                    }
                    ante->prox=novo;
                    novo->ant=ante;
                    novo->prox=aux;
                    if(aux!=NULL)
                        aux->ant=novo;
                }
                printf("LABORATORIO 2 INSERIDO");
            }
        }
        else
        {
            printf("\nERRO DE ALOCACAO\n");
        }
    }
}
void Auditorio1(AUDITORIO1 *aud1)
{

    printf("DIGITE A ID DO AUDITORIO 1: ");
    setbuf(stdin,NULL);
    scanf("%d", &aud1->id);

}
void Auditorio2(AUDITORIO2 *aud2)
{

    printf("DIGITE A ID DO AUDITORIO 2: ");
    setbuf(stdin,NULL);
    scanf("%d", &aud2->id);

}
void Auditorio3(AUDITORIO3 *aud3)
{

    printf("DIGITE A ID DO AUDITORIO 3: ");
    setbuf(stdin,NULL);
    scanf("%d", &aud3->id);

}
void Sala1(SALA1 *sala1)
{

    printf("DIGITE A ID DA SALA1: ");
    setbuf(stdin,NULL);
    scanf("%d", &sala1->id);

}
void Sala2(SALA2 *sala2)
{

    printf("DIGITE A ID DA SALA2: ");
    setbuf(stdin,NULL);
    scanf("%d", &sala2->id);

}
void Sala3(SALA3 *sala3)
{

    printf("DIGITE A ID DA SALA3: ");
    setbuf(stdin,NULL);
    scanf("%d", &sala3->id);

}
void Laboratorio1(LAB1 *lab1)
{

    printf("DIGITE A ID DO LABORATORIO 1: ");
    setbuf(stdin,NULL);
    scanf("%d", &lab1->id);

}
void Laboratorio2(LAB2 *lab2)
{

    printf("DIGITE A ID DO LABORATORIO 2: ");
    setbuf(stdin,NULL);
    scanf("%d", &lab2->id);

}
