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


void NovaPalestra(PALESTRA *p)
{
    printf("\n\tCADASTRO DE PALESTRA\n\n");
    printf("LOCAL DA PALESTRA (LOCAL Nº):");
    setbuf(stdin,NULL);
    gets(p->local);
    printf("\n");
    printf("HORARIO DA PALESTRA(HORARIO ENTRE 06:00 E 11:00): ");
    setbuf(stdin,NULL);
    gets(p->horario);
    printf("\n");
    printf("CARGA HORARIA DA PALESTRA: ");
    setbuf(stdin,NULL);
    scanf("%d", &p->carga_horaria);
    printf("\n");
    printf("TEMA DA PALESTRA: ");
    setbuf(stdin,NULL);
    gets(p->tema);
}

void inserirPalestra(LISTA *liP, PALESTRA p)
{
    if(liP==NULL)
    {
        printf("\nERRO DE ALOCACAO\n");
    }
    else
    {
        ELEM_PALESTRA* novo = (ELEM_PALESTRA*) malloc(sizeof(ELEM_PALESTRA));
        if(novo != NULL)
        {
            novo->dados= p;
            if(liP->inicio==NULL)
            {
                novo->prox=NULL;
                novo->ant=NULL;
                liP->inicio=novo;
            }
            else
            {
                if(strcmp(liP->inicio->dados.tema,novo->dados.tema)>0)
                {
                    novo->ant=NULL;
                    novo->prox=liP->inicio;
                    liP->inicio->ant=novo;
                    liP->inicio=novo;
                }
                else
                {
                    ELEM_PALESTRA *ante,*aux=liP->inicio;
                    while((aux!=NULL)&&(strcmp(aux->dados.tema,novo->dados.tema)<=0))
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

            }
            printf("\nPALESTRA INSERIDA\n");
        }
        else
        {
            printf("\nERRO DE ALOCACAO\n");
        }
    }
}

void mostrarPalestra(LISTA *liP, CONGRESSISTA *c, PALESTRANTE *pal, LISTA4 *liPal, LISTA5 *liCon)
{
    if(liP == NULL)
    {
        printf("\nERRO DE ALOCACAO\n");
    }
    else
    {
        if(liP->inicio==NULL)
        {
            printf("\nNAO TEM NENHUMA PALESTRA CADASTRADA\n");
        }
        else
        {
            ELEM_PALESTRA* aux = liP->inicio;
            ELEM_PALESTRA* aux3 = liP->inicio;
            ELEM_PALESTRANTE *aux1= liPal->inicio;
            ELEM_CONGRESSISTA *aux2 = liCon->inicio;
            printf("\n\t PALESTRAS\n");
            while(aux != NULL)
            {
                printf("--------------------------\n");
                printf("TEMA: %s\n",aux->dados.tema);
                printf("LOCAL: %s\n", aux->dados.local);
                printf("CARGA HORARIA: %d HORAS\n",aux->dados.carga_horaria);
                printf("HORARIO: %sh\n",aux->dados.horario);
                while(aux1 !=NULL)
                {
                    if(strcmp(aux1->dados.evento,aux->dados.tema)==0)
                    {
                        printf("\nPALESTRANTE: %s\n", aux1->dados.nome);
                    }
                    aux1=aux1->prox;
                }
                aux=aux->prox;
            }
            if(liCon == NULL)
            {
                printf("SEM CONGRESSISTAS AINDA...");

            }
            else
            {
                while(aux3!=NULL)
                {
                    printf("\nCONGRESSISTAS:\n");
                    while(aux2!=NULL)
                    {
                        if(strcmp(aux2->dados.evento,aux3->dados.tema)==0)
                        {
                            printf("- NOME: %s\n", aux2->dados.nome);

                        }
                        aux2= aux2->prox;

                    }
                    aux3 = aux3->prox;
                }
            }
            printf("--------------------------\n");
        }
    }
}
void removerPalestra(LISTA *liP)
{
    char remover[16];
    if(liP==NULL)
    {
        printf("\nERRO DE ALOCACAO\n");
    }
    else
    {
        if(liP->inicio==NULL)
        {
            printf("\nNAO EXISTE PALESTRAR CADASTRADAS\n");
        }
        else
        {
            printf("DIGITE O TEMA DA PALESTRA QUE DESEJA REMOVER: ");
            setbuf(stdin,NULL);
            gets(remover);
            ELEM_PALESTRA *aux=liP->inicio;
            if(strcmp(aux->dados.tema,remover)==0)
            {
                liP->inicio=aux->prox;
                if(aux->prox!=NULL)
                    aux->prox->ant=NULL;
                free(aux);
            }
            else
            {
                ELEM_PALESTRA *ant;
                while(strcmp(aux->dados.tema,remover)==0)
                {
                    ant=aux;
                    aux=aux->prox;
                }
                if(aux==NULL)
                {
                    return;
                }
                ant->prox = aux->prox;
                if(aux->prox!=NULL)
                    aux->prox->ant=ant;
                free(aux);
            }
            printf("\nPALESTRA REMOVIDA\n");
        }
    }
}
void alterarPalestra(LISTA *liP)
{
    char edit[16];
    if(liP==NULL)
    {
        printf("\nERRO DE ALOCACAO\n");
    }
    else
    {
        if(liP->inicio==NULL)
        {
            printf("\nNAO EXISTE PALESTRA CADASTRADA\n");
        }
        else
        {
            ELEM_PALESTRA* aux;
            printf("DIGITE O TEMA DA PALESTRA QUE DESEJA ALTERAR: ");
            setbuf(stdin,NULL);
            gets(edit);
            aux=liP->inicio;
            while(aux != NULL)
            {
                if(strcmp(aux->dados.tema,edit)==0)
                {
                    printf("DIGITE O NOVO TEMA:");
                    setbuf(stdin,NULL);
                    gets(aux->dados.tema);
                    printf("DIGITE O NOVO LOCAL:");
                    setbuf(stdin,NULL);
                    gets(aux->dados.local);
                    printf("DIGITE A NOVA CARGA HORARIA:");
                    setbuf(stdin,NULL);
                    scanf("%d", &aux->dados.carga_horaria);
                    printf("DIGITE O NOVO HORARIO:");
                    setbuf(stdin,NULL);
                    gets(aux->dados.horario);
                }
                aux=aux->prox;
                printf("\nPALESTRA ALTERADA \n");
            }
        }

    }
}
void inserirCurso(LISTA1 *liC, CURSO c)
{
    if(liC==NULL)
    {
        printf("\nERRO DE ALOCACAO\n");
    }
    else
    {
        ELEM_CURSO* novo = (ELEM_CURSO*) malloc(sizeof(ELEM_CURSO));
        if(novo != NULL)
        {
            novo->dados= c;
            if(liC->inicio==NULL)
            {
                novo->prox=NULL;
                novo->ant=NULL;
                liC->inicio=novo;
            }
            else
            {
                if(strcmp(liC->inicio->dados.tema,novo->dados.tema)>0)
                {
                    novo->ant=NULL;
                    novo->prox=liC->inicio;
                    liC->inicio->ant=novo;
                    liC->inicio=novo;
                }
                else
                {
                    ELEM_CURSO *ante,*aux=liC->inicio;
                    while((aux!=NULL)&&(strcmp(aux->dados.tema,novo->dados.tema)<=0))
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

            }
            printf("\nCURSO INSERIDO\n");
        }
        else
        {
            printf("\nERRO DE ALOCACAO\n");
        }
    }
}
void mostrarCurso(LISTA1 *liC, CONGRESSISTA *c, PALESTRANTE *pal, LISTA4 *liPal, LISTA5 *liCon)
{
    if(liC == NULL)
    {
        printf("\nERRO DE ALOCACAO\n");
    }
    else
    {
        if(liC->inicio==NULL)
        {
            printf("\nNAO TEM NENHUM CURSO CADASTRADO\n");
        }
        else
        {
            ELEM_CURSO* aux = liC->inicio;
            ELEM_CURSO* aux3 = liC->inicio;
            ELEM_PALESTRANTE *aux1= liPal->inicio;
            ELEM_CONGRESSISTA *aux2 = liCon->inicio;
            printf("\n\t\t CURSOS\n");
            while(aux != NULL)
            {
                printf("--------------------------\n");
                printf("TEMA: %s\n",aux->dados.tema);
                printf("LOCAL: %s\n", aux->dados.local);
                printf("CARGA HORARIA: %d HORAS\n",aux->dados.carga_horaria);
                printf("HORARIO: %sh\n",aux->dados.horario);
                while(aux1 !=NULL)
                {
                    if(strcmp(aux1->dados.evento,aux->dados.tema)==0)
                    {
                        printf("\nPALESTRANTE: %s\n", aux1->dados.nome);
                    }
                    aux1=aux1->prox;
                }
                aux=aux->prox;
            }
            while(aux3!=NULL)
            {
                printf("\nCONGRESSISTAS:\n");
                while(aux2!=NULL)
                {
                    if(strcmp(aux2->dados.evento,aux3->dados.tema)==0)
                    {
                        printf("- NOME: %s\n", aux2->dados.nome);
                    }
                    aux2= aux2->prox;
                }
                aux3 = aux3->prox;
            }
        }
        printf("--------------------------\n");
    }
}
void removerCurso(LISTA *liC)
{
    char remover[16];
    if(liC==NULL)
    {
        printf("\nERRO DE ALOCACAO\n");
    }
    else
    {
        if(liC->inicio==NULL)
        {
            printf("\nNAO EXISTEM CURSOS CADASTRADOS\n");
        }
        else
        {
            printf("DIGITE O TEMA DO CURSO QUE DESEJA REMOVER: ");
            setbuf(stdin,NULL);
            gets(remover);
            ELEM_CURSO *aux=liC->inicio;
            if(strcmp(aux->dados.tema,remover)==0)
            {
                liC->inicio=aux->prox;
                if(aux->prox!=NULL)
                    aux->prox->ant=NULL;
                free(aux);
            }
            else
            {
                ELEM_CURSO *ant;
                while(strcmp(aux->dados.tema,remover)==0)
                {
                    ant=aux;
                    aux=aux->prox;
                }
                if(aux==NULL)
                {
                    return;
                }
                ant->prox = aux->prox;
                if(aux->prox!=NULL)
                    aux->prox->ant=ant;
                free(aux);
            }
            printf("\nCURSO REMOVIDO\n");
        }
    }
}
void alterarCurso(LISTA *liC)
{
    char edit[16];
    if(liC==NULL)
    {
        printf("\nERRO DE ALOCACAO\n");
    }
    else
    {
        if(liC->inicio==NULL)
        {
            printf("\nNAO EXISTEM CURSOS CADASTRADOS\n");
        }
        else
        {
            ELEM_CURSO* aux;
            printf("DIGITE O TEMA DO CURSO QUE DESEJA REMOVER: ");
            setbuf(stdin,NULL);
            gets(edit);
            aux=liC->inicio;
            while(aux != NULL)
            {
                if(strcmp(aux->dados.tema,edit)==0)
                {
                    printf("DIGITE O NOVO TEMA:");
                    setbuf(stdin,NULL);
                    gets(aux->dados.tema);
                    printf("DIGITE O NOVO LOCAL:");
                    setbuf(stdin,NULL);
                    gets(aux->dados.local);
                    printf("DIGITE A NOVA CARGA HORARIA:");
                    setbuf(stdin,NULL);
                    scanf("%d", &aux->dados.carga_horaria);
                    printf("DIGITE O NOVO HORARIO:");
                    setbuf(stdin,NULL);
                    gets(aux->dados.horario);
                }
                aux=aux->prox;
                printf("\nCURSO ALTERADO \n");
            }
        }

    }
}
void inserirOficina(LISTA2 *liO, OFICINA o)
{
    if(liO==NULL)
    {
        printf("\nERRO DE ALOCACAO\n");
    }
    else
    {
        ELEM_OFICINA* novo = (ELEM_OFICINA*) malloc(sizeof(ELEM_OFICINA));
        if(novo != NULL)
        {
            novo->dados= o;
            if(liO->inicio==NULL)
            {
                novo->prox=NULL;
                novo->ant=NULL;
                liO->inicio=novo;
            }
            else
            {
                if(strcmp(liO->inicio->dados.tema,novo->dados.tema)>0)
                {
                    novo->ant=NULL;
                    novo->prox=liO->inicio;
                    liO->inicio->ant=novo;
                    liO->inicio=novo;
                }
                else
                {
                    ELEM_OFICINA *ante,*aux=liO->inicio;
                    while((aux!=NULL)&&(strcmp(aux->dados.tema,novo->dados.tema)<=0))
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

            }
            printf("\nOFICINA INSERIDA\n");
        }
        else
        {
            printf("\nERRO DE ALOCACAO\n");
        }
    }
}
void mostrarOficina(LISTA2 *liO, CONGRESSISTA *c, PALESTRANTE *pal, LISTA4 *liPal, LISTA5 *liCon)
{
    if(liO == NULL)
    {
        printf("\nERRO DE ALOCACAO\n");
    }
    else
    {
        if(liO->inicio==NULL)
        {
            printf("\nNAO TEM NENHUMA OFICINA CADASTRADA\n");
        }
        else
        {
            ELEM_OFICINA* aux = liO->inicio;
            ELEM_OFICINA* aux3 = liO->inicio;
            ELEM_PALESTRANTE *aux1= liPal->inicio;
            ELEM_CONGRESSISTA *aux2 = liCon->inicio;
            printf("\n\t\t OFICINAS \n");
            while(aux != NULL)
            {
                printf("--------------------------\n");
                printf("TEMA: %s\n",aux->dados.tema);
                printf("LOCAL: %s\n", aux->dados.local);
                printf("CARGA HORARIA: %d HORAS\n",aux->dados.carga_horaria);
                printf("HORARIO: %sh\n",aux->dados.horario);
                while(aux1 !=NULL)
                {
                    if(strcmp(aux1->dados.evento,aux->dados.tema)==0)
                    {
                        printf("\nPALESTRANTE: %s\n", aux1->dados.nome);
                    }
                    aux1=aux1->prox;
                }
                aux=aux->prox;
            }
            while(aux3!=NULL)
            {
                printf("\nCONGRESSISTAS:\n");
                while(aux2!=NULL)
                {
                    if(strcmp(aux2->dados.evento,aux3->dados.tema)==0)
                    {
                        printf("- NOME: %s\n", aux2->dados.nome);
                    }
                    aux2= aux2->prox;

                }
                aux3 = aux3->prox;
            }

            printf("--------------------------\n");
        }
    }
}
void removerOficina(LISTA2 *liO)
{
    char remover[16];
    if(liO==NULL)
    {
        printf("\nERRO DE ALOCACAO\n");
    }
    else
    {
        if(liO->inicio==NULL)
        {
            printf("\nNAO EXISTEM OFICINAS CADASTRADOS\n");
        }
        else
        {
            printf("DIGITE O TEMA DA OFICINA QUE DESEJA REMOVER: ");
            setbuf(stdin,NULL);
            gets(remover);
            ELEM_OFICINA *aux=liO->inicio;
            if(strcmp(aux->dados.tema,remover)==0)
            {
                liO->inicio=aux->prox;
                if(aux->prox!=NULL)
                    aux->prox->ant=NULL;
                free(aux);
            }
            else
            {
                ELEM_OFICINA *ant;
                while(strcmp(aux->dados.tema,remover)==0)
                {
                    ant=aux;
                    aux=aux->prox;
                }
                if(aux==NULL)
                {
                    return;
                }
                ant->prox = aux->prox;
                if(aux->prox!=NULL)
                    aux->prox->ant=ant;
                free(aux);
            }
            printf("\nOFICINA REMOVIDA\n");
        }
    }
}
void alterarOficina(LISTA2 *liO)
{
    char edit[16];
    if(liO==NULL)
    {
        printf("\nERRO DE ALOCACAO\n");
    }
    else
    {
        if(liO->inicio==NULL)
        {
            printf("\nNAO EXISTEM OFICINAS CADASTRADAS\n");
        }
        else
        {
            ELEM_OFICINA* aux;
            printf("DIGITE O TEMA DO CURSO QUE DESEJA ALTERAR: ");
            setbuf(stdin,NULL);
            gets(edit);
            aux=liO->inicio;
            while(aux != NULL)
            {
                if(strcmp(aux->dados.tema,edit)==0)
                {
                    printf("DIGITE O NOVO TEMA:");
                    setbuf(stdin,NULL);
                    gets(aux->dados.tema);
                    printf("DIGITE O NOVO LOCAL:");
                    setbuf(stdin,NULL);
                    gets(aux->dados.local);
                    printf("DIGITE A NOVA CARGA HORARIA:");
                    setbuf(stdin,NULL);
                    scanf("%d", &aux->dados.carga_horaria);
                    printf("DIGITE O NOVO HORARIO:");
                    setbuf(stdin,NULL);
                    gets(aux->dados.horario);
                }
                aux=aux->prox;
                printf("\nOFICINA ALTERADO \n");
            }
        }

    }
}
void inserirGrupo(LISTA3 *liG, GRUPOS g)
{
    if(liG==NULL)
    {
        printf("\nERRO DE ALOCACAO\n");
    }
    else
    {
        ELEM_GRUPOS* novo = (ELEM_GRUPOS*) malloc(sizeof(ELEM_GRUPOS));
        if(novo != NULL)
        {
            novo->dados= g;
            if(liG->inicio==NULL)
            {
                novo->prox=NULL;
                novo->ant=NULL;
                liG->inicio=novo;
            }
            else
            {
                if(strcmp(liG->inicio->dados.tema,novo->dados.tema)>0)
                {
                    novo->ant=NULL;
                    novo->prox=liG->inicio;
                    liG->inicio->ant=novo;
                    liG->inicio=novo;
                }
                else
                {
                    ELEM_GRUPOS *ante,*aux=liG->inicio;
                    while((aux!=NULL)&&(strcmp(aux->dados.tema,novo->dados.tema)<=0))
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

            }
            printf("\nGRUPO DE DISCUSSAO INSERIDO\n");
        }
        else
        {
            printf("\nERRO DE ALOCACAO\n");
        }
    }
}
void mostrarGrupo(LISTA3 *liG, CONGRESSISTA *c, PALESTRANTE *pal, LISTA4 *liPal, LISTA5 *liCon)
{
    if(liG == NULL)
    {
        printf("\nERRO DE ALOCACAO\n");
    }
    else
    {
        if(liG->inicio==NULL)
        {
            printf("\nNAO TEM NENHUM GRUPO DE DISCUSSAO CADASTRADO\n");
        }
        else
        {
            ELEM_GRUPOS* aux = liG->inicio;
            ELEM_GRUPOS* aux3 = liG->inicio;
            ELEM_PALESTRANTE *aux1= liPal->inicio;
            ELEM_CONGRESSISTA *aux2 = liCon->inicio;
            printf("\n\t\t GRUPOS\n");
            while(aux != NULL)
            {
                printf("TEMA: %s\n",aux->dados.tema);
                printf("LOCAL: %s\n", aux->dados.local);
                printf("CARGA HORARIA: %d HORAS\n",aux->dados.carga_horaria);
                printf("HORARIO: %sh\n",aux->dados.horario);
                printf("MEMBROS DA MESA:\n");
                while(aux1 !=NULL)
                {
                    if(strcmp(aux1->dados.evento,aux->dados.tema)==0)
                    {
                        printf("- NOME(PALESTRANTE): %s\n", aux1->dados.nome);
                    }
                    aux1=aux1->prox;
                }
                aux=aux->prox;
            }
            while(aux3!=NULL)
            {
                while(aux2!=NULL)
                {
                    if(strcmp(aux2->dados.evento,aux3->dados.tema)==0)
                    {
                        printf("- NOME(CONGRESSISTAS): %s\n", aux2->dados.nome);
                    }
                    aux2= aux2->prox;

                }
                aux3 = aux3->prox;
            }


        }
    }
}
void removerGrupo(LISTA3 *liG)
{
    char remover[16];
    if(liG==NULL)
    {
        printf("\nERRO DE ALOCACAO\n");
    }
    else
    {
        if(liG->inicio==NULL)
        {
            printf("\nNAO EXISTEM GRUPOS CADASTRADOS\n");
        }
        else
        {
            printf("DIGITE O TEMA DO GRUPO QUE DESEJA REMOVER: ");
            setbuf(stdin,NULL);
            gets(remover);
            ELEM_GRUPOS *aux=liG->inicio;
            if(strcmp(aux->dados.tema,remover)==0)
            {
                liG->inicio=aux->prox;
                if(aux->prox!=NULL)
                    aux->prox->ant=NULL;
                free(aux);
            }
            else
            {
                ELEM_GRUPOS *ant;
                while(strcmp(aux->dados.tema,remover)==0)
                {
                    ant=aux;
                    aux=aux->prox;
                }
                if(aux==NULL)
                {
                    return;
                }
                ant->prox = aux->prox;
                if(aux->prox!=NULL)
                    aux->prox->ant=ant;
                free(aux);
            }
            printf("\nGRUPO REMOVIDO\n");
        }
    }
}
void alterarGrupo(LISTA3 *liG)
{
    char edit[16];
    if(liG==NULL)
    {
        printf("\nERRO DE ALOCACAO\n");
    }
    else
    {
        if(liG->inicio==NULL)
        {
            printf("\nNAO EXISTEM GRUPOS CADASTRADOS\n");
        }
        else
        {
            ELEM_GRUPOS* aux;
            printf("DIGITE O TEMA DO GRUPO QUE DESEJA ALTERAR: ");
            setbuf(stdin,NULL);
            gets(edit);
            aux=liG->inicio;
            while(aux != NULL)
            {
                if(strcmp(aux->dados.tema,edit)==0)
                {
                    printf("DIGITE O NOVO TEMA:");
                    setbuf(stdin,NULL);
                    gets(aux->dados.tema);
                    printf("DIGITE O NOVO LOCAL:");
                    setbuf(stdin,NULL);
                    gets(aux->dados.local);
                    printf("DIGITE A NOVA CARGA HORARIA:");
                    setbuf(stdin,NULL);
                    scanf("%d", &aux->dados.carga_horaria);
                    printf("DIGITE O NOVO HORARIO:");
                    setbuf(stdin,NULL);
                    gets(aux->dados.horario);
                }
                aux=aux->prox;
                printf("\nGRUPO ALTERADO \n");
            }
        }

    }
}
void NovoGrupo(GRUPOS *g)
{
    printf("LOCAL DO GRUPO DE DISCUSSAO (LOCAL Nº): ");
    setbuf(stdin,NULL);
    gets(g->local);
    printf("HORARIO DO GRUPO DE DISCUSSAO (HORARIO ENTRE 12:00 E 20:00): ");
    setbuf(stdin,NULL);
    gets(g->horario);
    printf("CARGA HORARIA DO GRUPO DE DISCUSSAO: ");
    setbuf(stdin,NULL);
    scanf("%d", &g->carga_horaria);
    printf("TEMA DO GRUPO DE DISCUSSAO: ");
    setbuf(stdin,NULL);
    gets(g->tema);
}

void NovaOficina(OFICINA *o)
{
    printf("LOCAL DA OFICINA (LOCAL Nº): ");
    setbuf(stdin,NULL);
    gets(o->local);
    printf("HORARIO DA OFICINA (HORARIO ENTRE 12:00 E 20:00) : ");
    setbuf(stdin,NULL);
    gets(o->horario);
    printf("CARGA HORARIA DA OFICINA: ");
    setbuf(stdin,NULL);
    scanf("%d", &o->carga_horaria);
    printf("TEMA DA OFICINA: ");
    setbuf(stdin,NULL);
    gets(o->tema);
}
void NovoCurso(CURSO *c)
{
    printf("LOCAL DO CURSO (LOCAL Nº): ");
    setbuf(stdin,NULL);
    gets(c->local);
    printf("HORARIO DO CURSO (HORARIO ENTRE 12:00 E 20:00) : ");
    setbuf(stdin,NULL);
    gets(c->horario);
    printf("CARGA HORARIA DO CURSO: ");
    setbuf(stdin,NULL);
    scanf("%d", &c->carga_horaria);
    printf("TEMA DO CURSO: ");
    setbuf(stdin,NULL);
    gets(c->tema);
}
