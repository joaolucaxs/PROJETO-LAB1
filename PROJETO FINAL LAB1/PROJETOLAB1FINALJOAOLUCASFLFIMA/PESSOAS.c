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

void inserirOrganizador(LISTA5 *liOrg, ORGANIZADOR org){

    if(liOrg==NULL)
    {
        printf("\nERRO DE ALOCACAO\n");
    }
    else
    {
        ELEM_ORGANIZADOR* novo = (ELEM_ORGANIZADOR*) malloc(sizeof(ELEM_ORGANIZADOR));
        if(novo != NULL)
        {
            novo->dados= org;
            if(liOrg->inicio==NULL)
            {
                novo->prox=NULL;
                novo->ant=NULL;
                liOrg->inicio=novo;
            }
            else
            {
                if(strcmp(liOrg->inicio->dados.nome,novo->dados.nome)>0)
                {
                    novo->ant=NULL;
                    novo->prox=liOrg->inicio;
                    liOrg->inicio->ant=novo;
                    liOrg->inicio=novo;
                }
                else
                {
                    ELEM_ORGANIZADOR *ante,*aux=liOrg->inicio;
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

            }
            printf("\nORGANIZADOR INSERIDO\n");
        }
        else
        {
            printf("\nERRO DE ALOCACAO\n");
        }
    }
}
void mostrarOrganizador(LISTA5 *liOrg)
{
    if(liOrg == NULL)
    {
        printf("\nERRO DE ALOCACAO\n");
    }
    else
    {
        if(liOrg->inicio==NULL)
        {
            printf("\nNAO TEM NENHUM ORGANIZADOR CADASTRADO\n");
        }
        else
        {
            ELEM_ORGANIZADOR* aux = liOrg->inicio;
            printf("\n\t LISTA DOS ORGANIZADORES\n");
            while(aux != NULL)
            {
                printf("--------------------------\n");
                printf("- NOME: %s\n",aux->dados.nome);
                printf("- ID: %d\n",aux->dados.id);
                printf("--------------------------\n");
                aux = aux->prox;
            }
        }
    }
}
void removerOrganizador(LISTA5 *liOrg)
{
    int ide;
    if(liOrg==NULL)
    {
        printf("\nERRO DE ALOCACAO\n");
    }
    else
    {
        if(liOrg->inicio==NULL)
        {
            printf("\nNAO EXISTEM ORGANIZADORES CADASTRADOS\n");
        }
        else
        {
            printf("DIGITE O ID DO ORGANIZADOR QUE DESEJA REMOVER: ");
            setbuf(stdin,NULL);
            scanf("%d", &ide);
            ELEM_ORGANIZADOR *aux=liOrg->inicio;
            if(ide==aux->dados.id)
            {
                liOrg->inicio=aux->prox;
                if(aux->prox!=NULL)
                    aux->prox->ant=NULL;
                free(aux);
            }
            else
            {
                ELEM_ORGANIZADOR *ant;
                while(ide==aux->dados.id)
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
            printf("\nORGANIZADOR REMOVIDO\n");
        }
    }
}
void alterarOrganizador(LISTA5 *liOrg)
{
    int edit;
    if(liOrg==NULL)
    {
        printf("\nERRO DE ALOCACAO\n");
    }
    else
    {
        if(liOrg->inicio==NULL)
        {
            printf("\nNAO EXISTEM ORGANIZADORES CADASTRADOS\n");
        }
        else
        {
            ELEM_ORGANIZADOR* aux;
            printf("DIGITE O ID DO ORGANIZADOR QUE DESEJA ALTERAR: ");
            setbuf(stdin,NULL);
            scanf("%d", &edit);
            aux=liOrg->inicio;
            while(aux != NULL)
            {
                if(aux->dados.id==edit)
                {
                    printf("DIGITE O NOVO NOME:");
                    setbuf(stdin,NULL);
                    gets(aux->dados.nome);
                    printf("DIGITE O NOVO ID:");
                    setbuf(stdin,NULL);
                    scanf("%d", &aux->dados.id);
                }
                aux=aux->prox;
                printf("\nORGANIZADOR ALTERADO \n");
            }
        }

    }
}
void NovoOrganizador(ORGANIZADOR *org)
{
    printf("DIGITE O NOME DO ORGANIZADOR: ");
    setbuf(stdin,NULL);
    gets(org->nome);
    printf("DIGITE O ID DO ORGANIZADOR: ");
    setbuf(stdin,NULL);
    scanf("%d", &org->id);
}
void inserirPalestrante(LISTA4 *liPal, PALESTRANTE pal)
{
    if(liPal==NULL)
    {
        printf("\nERRO DE ALOCACAO\n");
    }
    else
    {
        ELEM_PALESTRANTE* novo = (ELEM_PALESTRANTE*) malloc(sizeof(ELEM_PALESTRANTE));
        if(novo != NULL)
        {
            novo->dados= pal;
            if(liPal->inicio==NULL)
            {
                novo->prox=NULL;
                novo->ant=NULL;
                liPal->inicio=novo;
            }
            else
            {
                if(strcmp(liPal->inicio->dados.nome,novo->dados.nome)>0)
                {
                    novo->ant=NULL;
                    novo->prox=liPal->inicio;
                    liPal->inicio->ant=novo;
                    liPal->inicio=novo;
                }
                else
                {
                    ELEM_PALESTRANTE *ante,*aux=liPal->inicio;
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

            }
            printf("\nPALESTRANTE INSERIDO\n");
        }
        else
        {
            printf("\nERRO DE ALOCACAO\n");
        }
    }
}
void mostrarPalestrante(LISTA4 *liPal)
{
    if(liPal == NULL)
    {
        printf("\nERRO DE ALOCACAO\n");
    }
    else
    {
        if(liPal->inicio==NULL)
        {
            printf("\nNAO TEM NENHUM PALESTRANTE CADASTRADO\n");
        }
        else
        {
            ELEM_PALESTRANTE* aux = liPal->inicio;
            printf("\n\t LISTA DE PALESTRANTES\n");
            while(aux != NULL)
            {
                printf("-------------------------\n");
                printf("- NOME: %s\n",aux->dados.nome);
                printf("- ID: %d\n",aux->dados.id);
                printf("-------------------------\n");

                aux = aux->prox;
            }
        }
    }
}
void removerPalestrante(LISTA4 *liPal)
{
    int ide;
    if(liPal==NULL)
    {
        printf("\nERRO DE ALOCACAO\n");
    }
    else
    {
        if(liPal->inicio==NULL)
        {
            printf("\nNAO EXISTEM PALESTRANTES CADASTRADOS\n");
        }
        else
        {
            printf("DIGITE O ID DO PALESTRANTE QUE DESEJA REMOVER: ");
            setbuf(stdin,NULL);
            scanf("%d", &ide);
            ELEM_PALESTRANTE *aux=liPal->inicio;
            if(ide==aux->dados.id)
            {
                liPal->inicio=aux->prox;
                if(aux->prox!=NULL)
                    aux->prox->ant=NULL;
                free(aux);
            }
            else
            {
                ELEM_PALESTRANTE *ant;
                while(ide==aux->dados.id)
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
            printf("\nPALESTRANTE REMOVIDO\n");
        }
    }
}
void alterarPalestrante(LISTA4 *liPal)
{
    int edit;
    if(liPal==NULL)
    {
        printf("\nERRO DE ALOCACAO\n");
    }
    else
    {
        if(liPal->inicio==NULL)
        {
            printf("\nNAO EXISTEM PALESTRANTES CADASTRADOS\n");
        }
        else
        {
            ELEM_PALESTRANTE* aux;
            printf("DIGITE O ID DO PALESTRANTE QUE DESEJA ALTERAR: ");
            setbuf(stdin,NULL);
            scanf("%d", &edit);
            aux=liPal->inicio;
            while(aux != NULL)
            {
                if(aux->dados.id==edit)
                {
                    printf("DIGITE O NOVO NOME:");
                    setbuf(stdin,NULL);
                    gets(aux->dados.nome);
                    printf("DIGITE O NOVO ID:");
                    setbuf(stdin,NULL);
                    scanf("%d", &aux->dados.id);
                }
                aux=aux->prox;
                printf("\nPALESTRANTE ALTERADO \n");
            }
        }

    }
}
void NovoPalestrante(PALESTRANTE *pal)
{
    printf("DIGITE O NOME DO PALESTRANTE: ");
    setbuf(stdin,NULL);
    gets(pal->nome);
    printf("DIGITE O ID DO PALESTRANTE: ");
    setbuf(stdin,NULL);
    scanf("%d", &pal->id);
    printf("DIGITE O EVENTO QUE O PALESTRANTE IRÁ PALESTRAR: ");
    setbuf(stdin,NULL);
    gets(pal->evento);
}
void inserirCongressista(LISTA6 *liCon, CONGRESSISTA con)
{
    if(liCon==NULL)
    {
        printf("\nERRO DE ALOCACAO\n");
    }
    else
    {
        ELEM_CONGRESSISTA* novo = (ELEM_CONGRESSISTA*) malloc(sizeof(ELEM_CONGRESSISTA));
        if(novo != NULL)
        {
            novo->dados= con;
            if(liCon->inicio==NULL)
            {
                novo->prox=NULL;
                novo->ant=NULL;
                liCon->inicio=novo;
            }
            else
            {
                if(strcmp(liCon->inicio->dados.nome,novo->dados.nome)>0)
                {
                    novo->ant=NULL;
                    novo->prox=liCon->inicio;
                    liCon->inicio->ant=novo;
                    liCon->inicio=novo;
                }
                else
                {
                    ELEM_CONGRESSISTA *ante,*aux=liCon->inicio;
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

            }
            printf("\nCONGRESSISTA INSERIDO\n");
        }
        else
        {
            printf("\nERRO DE ALOCACAO\n");
        }
    }
}
void mostrarCongressista(LISTA6 *liCon)
{
    if(liCon == NULL)
    {
        printf("\nERRO DE ALOCACAO\n");
    }
    else
    {
        if(liCon->inicio==NULL)
        {
            printf("\nNAO TEM NENHUM CONGRESSISTA CADASTRADO\n");
        }
        else
        {
            ELEM_CONGRESSISTA* aux = liCon->inicio;
            printf("\n\t LISTA DE CONGRESSISTAS\n");
            while(aux != NULL)
            {
                printf("--------------------------\n");
                printf("- NOME: %s\n",aux->dados.nome);
                printf("- ID: %d\n",aux->dados.id);
                printf("--------------------------\n");
                aux = aux->prox;
            }
        }
    }
}
void removerCongressista(LISTA6 *liCon)
{
    int ide;
    if(liCon==NULL)
    {
        printf("\nERRO DE ALOCACAO\n");
    }
    else
    {
        if(liCon->inicio==NULL)
        {
            printf("\nNAO EXISTEM CONGRESSISTAS CADASTRADOS\n");
        }
        else
        {
            printf("DIGITE O ID DO CONGRESSISTA QUE DESEJA REMOVER: ");
            setbuf(stdin,NULL);
            scanf("%d", &ide);
            ELEM_CONGRESSISTA *aux=liCon->inicio;
            if(ide==aux->dados.id)
            {
                liCon->inicio=aux->prox;
                if(aux->prox!=NULL)
                    aux->prox->ant=NULL;
                free(aux);
            }
            else
            {
                ELEM_CONGRESSISTA *ant;
                while(ide==aux->dados.id)
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
            printf("\nCONGRESSISTA REMOVIDO\n");
        }
    }
}
void alterarCongressista(LISTA6 *liCon)
{
    int edit;
    if(liCon==NULL)
    {
        printf("\nERRO DE ALOCACAO\n");
    }
    else
    {
        if(liCon->inicio==NULL)
        {
            printf("\nNAO EXISTEM CONGRESSISTAS CADASTRADOS\n");
        }
        else
        {
            ELEM_CONGRESSISTA* aux;
            printf("DIGITE O ID DO CONGRESSISTA QUE DESEJA ALTERAR: ");
            setbuf(stdin,NULL);
            scanf("%d", &edit);
            aux=liCon->inicio;
            while(aux != NULL)
            {
                if(aux->dados.id==edit)
                {
                    printf("DIGITE O NOVO NOME:");
                    setbuf(stdin,NULL);
                    gets(aux->dados.nome);
                    printf("DIGITE O NOVO ID:");
                    setbuf(stdin,NULL);
                    scanf("%d", &aux->dados.id);
                }
                aux=aux->prox;
                printf("\nCONGRESSISTA ALTERADO \n");
            }
        }

    }
}
void NovoCongressista(CONGRESSISTA *con)
{

    printf("\nDIGITE O NOME DO CONGRESSISTA: ");
    setbuf(stdin,NULL);
    gets(con->nome);
    printf("\n");
    printf("DIGITE O ID DO CONGRESSISTA: ");
    setbuf(stdin,NULL);
    scanf("%d", &con->id);
    printf("\n");
    printf("DIGITE O EVENTO QUE O CONGRESSISTA IRÁ PARTICIPAR: ");
    setbuf(stdin,NULL);
    gets(con->evento);

}
