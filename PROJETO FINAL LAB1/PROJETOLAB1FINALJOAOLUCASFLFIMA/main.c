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

LISTA* criar()
{
    LISTA* li = (LISTA*) malloc(sizeof(LISTA));
    if(li != NULL)
    {
        li->inicio= NULL;
    }
    return li;
}

void main()
{

    LISTA10 *liAud1 = criar();
    LISTA11 *liAud2 = criar();
    LISTA12 *liAud3 = criar();
    LISTA13 *liSala1 = criar();
    LISTA14 *liSala2 = criar();
    LISTA15 *liSala3 = criar();
    LISTA16 *liLab1 = criar();
    LISTA17 *liLab2 = criar();
    LISTA *liP = criar();
    LISTA2 *liO = criar();
    LISTA3 *liG = criar();
    LISTA1 *liC = criar();
    LISTA4 *liPal = criar();
    LISTA5 *liOrg = criar();
    LISTA6 *liCon = criar();
    AUDITORIO1 aud1;
    AUDITORIO2 aud2;
    AUDITORIO3 aud3;
    SALA1 sala1;
    SALA2 sala2;
    SALA3 sala3;
    LAB1 lab1;
    LAB2 lab2;
    CONGRESSISTA con;
    PALESTRANTE pal;
    ORGANIZADOR org;
    PALESTRA p;
    OFICINA o;
    GRUPOS g;
    CURSO c;
    int op=1, op1=1;
    setlocale(LC_ALL, "Portuguese");
    system("color 0F");
    printf("\n\n\n\t ALUNO : JOAO LUCAS FERREIRA LIMA\n");
    printf("\t CURSO : CIENCIA DA COMPUTAÇÃO\n");
    printf("\t DISCIPLINA: LABORATORIO DE LINGUAGEM DE PROGRAMAÇÃO 1\n");
    printf("\t PROJETO: ENCONTRO CAMPINENSE DOS ESTUDANTES DE COMPUTAÇÃO\n\n\n\n");
    //Sleep(4000);
    system("cls");
    system("color 3F");
    printf("|-------------------------------------------------------------------------|\n");
    printf("|                                                                         |\n");

    printf("|\t\t\t\t BEM VINDOS                               |\n");
    printf("|                                                                         |\n");

    printf("\n|  \t\tENCONTRO CAMPINENSE DOS ESTUDANTES DE COMPUTAÇÃO          |\n");
    printf("|                                                                         |\n");
    printf("|                                                                         |\n");
    printf("|-------------------------------------------------------------------------|\n");

    do
    {
        printf("\n\nCOMECE CADASTRANDO OS ID's DOS AUDITORIOS, SALAS E LABORATORIOS \n( UM POR UM, EM ORDEM ):\n\n");
        printf("1 - PARA CADASTRAR O AUDITORIO 1\n");
        printf("2 - PARA CADASTRAR O AUDITORIO 2\n");
        printf("3 - PARA CADASTRAR O AUDITORIO 3\n");
        printf("4 - PARA CADASTRAR A SALA 1\n");
        printf("5 - PARA CADASTRAR A SALA 2\n");
        printf("6 - PARA CADASTRAR A SALA 3\n");
        printf("7 - PARA CADASTRAR O LABORATORIO 1\n");
        printf("8 - PARA CADASTRAR O LABORATORIO 2\n");
        printf("0 - PARA CONTINUAR\n\n");
        printf("OPÇAO: ");
        scanf("%d", &op1);
        if(op1==1)
        {
            Auditorio1(&aud1);
            inserirAud1(liAud1, aud1, con, pal);
        }
        if(op1==2)
        {
            Auditorio2(&aud2);
            inserirAud2(liAud2, aud2, con, pal);
        }
        if(op1==3)
        {
            Auditorio3(&aud2);
            inserirAud3(liAud3, aud3, con, pal);
        }
        if(op1==4)
        {
            Sala1(&sala1);
            inserirsala1(liSala1, sala1, con, pal);
        }
        if(op1==5)
        {
            Sala2(&sala2);
            inserirsala2(liSala2, sala2, con, pal);
        }
        if(op1==6)
        {
            Sala3(&sala3);
            inserirsala3(liSala3, sala3, con, pal);
        }
        if(op1==7)
        {
            Laboratorio1(&lab1);
            inserirLab1(liLab1, lab1, con, pal);
        }
        if(op1==8)
        {
            Laboratorio2(&lab2);
            inserirLab2(liLab2, lab2, con, pal);
        }
        system("cls");
    }
    while(op1!=0);
    do
    {
        printf("\n\t\t **GERENCIAMENTO DO EVENTO** \n\n");
        printf("\n\t\t   *CONTROLE DE PALESTRAS*\n\n");
        printf(" 1- CADASTRAR PALESTRA");
        printf(" \t \t\t 2- MOSTRAR PALESTRAS\n");
        printf(" 3- REMOVER UMA PALESTRA");
        printf(" \t \t 4- ALTERAR UMA PALESTRA\n\n\n");
        printf("\n\t\t    *CONTROLE DE CURSOS*\n\n");
        printf(" 5- CADASTRAR CURSO");
        printf(" \t \t\t 6- MOSTRAR CURSOS\n");
        printf(" 7- REMOVER UM CURSO");
        printf(" \t \t\t 8- ALTERAR UM CURSO\n\n");
        printf("\n\t\t   *CONTROLE DE OFICINAS*\n\n");
        printf(" 9- CADASTRAR OFICINA");
        printf(" \t \t\t10- MOSTRAR OFICINAS\n");
        printf("11- REMOVER UMA OFICINA");
        printf(" \t\t12- ALTERAR UMA OFICINA\n\n\n");
        printf("\n\t\t    *CONTROLE DE GRUPOS*\n\n");
        printf("13- CADASTRAR GRUPO");
        printf(" \t \t\t14- MOSTRAR GRUPOS\n");
        printf("15- REMOVER UM GRUPO");
        printf(" \t \t\t16- ALTERAR UM GRUPO\n\n\n");
        printf("\n\t\t *CONTROLE DE PALESTRANTES*\n\n");
        printf("17- CADASTRAR PALESTRANTE");
        printf(" \t\t18- MOSTRAR LISTA DE PALESTRANTES\n");
        printf("19- ALTERAR PALESTRANTE");
        printf(" \t\t20- REMOVER PALESTRANTE\n\n");
        printf("\n\t\t *CONTROLE DE ORGANIZADORES*\n\n\n");
        printf("21- CADASTRAR NOVO ORGANIZADOR");
        printf(" \t \t22- MOSTRAR LISTA DOS ORGANIZADORES\n");
        printf("23- ALTERAR ORGANIZADOR");
        printf(" \t \t24- REMOVER ORGANIZADOR\n\n");
        printf("\n\t\t *CONTROLE DE CONGRESSISTAS*\n\n\n");
        printf("25- CADASTRAR NOVO CONGRESSISTA");
        printf(" \t26- MOSTRAR LISTA DOS CONGRESSISTAS\n");
        printf("27- ALTERAR CONGRESSISTA");
        printf(" \t \t28- REMOVER CONGRESSISTA\n\n");
        printf("\n\t\t    *CONTROLE DE LOCAIS*\n\n\n");
        printf("29- MOSTRAR O AUDITORIO 1");
        printf(" \t \t30- MOSTRAR O AUDITORIO 2\n");
        printf("31- MOSTRAR O AUDITORIO 3");
        printf(" \t \t32- MOSTRAR A SALA 1\n");
        printf("33- MOSTRAR A SALA 2");
        printf(" \t \t\t34- MOSTRAR A SALA 3\n");
        printf("35- MOSTRAR O LABORATORIO 1");
        printf(" \t \t36- MOSTRAR O LABORATORIO 1\n");
        printf("\n");
        printf("\n(DIGITE ZERO SE FOR SAIR DO PROGRAMA) DIGITE A OPÇÃO: ");
        scanf("%d", &op);
        system("cls");

        if(op==1)
        {
            NovaPalestra(&p);
            inserirPalestra(liP,p);
        }
        if(op==2)
        {
            mostrarPalestra(liP, &c, &pal, liPal, liCon);
        }
        if(op==3)
        {
            mostrarPalestra(liP, &c, &pal, liPal, liCon);
            removerPalestra(liP);
        }
        if(op==4)
        {
            mostrarPalestra(liP, &c, &pal, liPal, liCon);
            alterarPalestra(liP);
        }
        if(op==5)
        {
            NovoCurso(&c);
            inserirCurso(liC,c);
        }
        if(op==6)
        {
            mostrarCurso(liC, &c, &pal, liPal, liCon);
        }
        if(op==7)
        {
            mostrarCurso(liC, &c, &pal, liPal, liCon);
            removerCurso(liC);
        }
        if(op==8)
        {
            mostrarCurso(liC, &c, &pal, liPal, liCon);
            alterarCurso(liC);
        }
        if(op==9)
        {
            NovaOficina(&o);
            inserirOficina(liO, o);
        }
        if(op==10)
        {
            mostrarOficina(liO, &c, &pal, liPal, liCon);
        }
        if(op==11)
        {
            mostrarOficina(liO, &c, &pal, liPal, liCon);
            removerOficina(liO);
        }
        if(op==12)
        {
            mostrarOficina(liO, &c, &pal, liPal, liCon);
            alterarOficina(liO);
        }
        if(op==13)
        {
            NovoGrupo(&g);
            inserirGrupo(liG,g);
        }
        if(op==14)
        {
            mostrarGrupo(liG,&c, &pal, liPal, liCon);
        }
        if(op==15)
        {
            mostrarGrupo(liG,&c, &pal, liPal, liCon);
            removerGrupo(liG);
        }
        if(op==16)
        {
            mostrarGrupo(liG,&c, &pal, liPal, liCon);
            alterarGrupo(liG);
        }
        if(op==17)
        {
            mostrarPalestra(liP, &c, &pal, liPal, liCon);
            mostrarCurso(liC, &c, &pal, liPal, liCon);
            mostrarOficina(liO, &c, &pal, liPal, liCon);
            mostrarGrupo(liG,&c, &pal, liPal, liCon);
            NovoPalestrante(&pal);
            inserirPalestrante(liPal, pal);
        }
        if(op==18)
        {
            mostrarPalestrante(liPal);
        }
        if(op==19)
        {
            mostrarPalestrante(liPal);
            alterarPalestrante(liPal);
        }
        if(op==20)
        {
            mostrarPalestrante(liPal);
            removerPalestrante(liPal);
        }
        if(op==21)
        {
            NovoOrganizador(&org);
            inserirOrganizador(liOrg, org);
        }
        if(op==22)
        {
            mostrarOrganizador(liOrg);
        }
        if(op==23)
        {
            mostrarOrganizador(liOrg);
            alterarOrganizador(liOrg);
        }
        if(op==24)
        {
            mostrarOrganizador(liOrg);
            removerOrganizador(liOrg);
        }
        if(op==25)
        {
            mostrarPalestra(liP, &c, &pal, liPal, liCon);
            mostrarCurso(liC, &c, &pal, liPal, liCon);
            mostrarOficina(liO, &c, &pal, liPal, liCon);
            mostrarGrupo(liG,&c, &pal, liPal, liCon);
            NovoCongressista(&con);
            inserirCongressista(liCon, con);
        }
        if(op==26)
        {
            mostrarCongressista(liCon);
        }
        if(op==27)
        {
            mostrarCongressista(liCon);
            alterarCongressista(liCon);
        }
        if(op==28)
        {
            mostrarCongressista(liCon);
            removerCongressista(liCon);
        }
        if(op==29)
        {
            mostraraud1(liAud1, liP, liC, liO, liG, &p, &c, &o, &g);
        }
        if(op==30)
        {
            mostraraud2(liAud2, liP, liC, liO, liG, &p, &c, &o, &g);

        }
        if(op==31)
        {
            mostraraud3(liAud3, liC, liO, liG, &g, &o, &c);
        }
        if(op==32)
        {
            mostrarsala1(liSala1,liC, liO, liG, &c, &o, &g);
        }
        if(op==33)
        {
            mostrarsala2(liSala2,liC, liO, liG, &c, &o, &g);
        }
        if(op==34)
        {
            mostrarsala3(liSala3,liC, liO, liG, &c, &o, &g);
        }
        if(op==35)
        {
            mostrarlab1(liLab1, liC, liO, liG, &c, &o, &g);
        }
        if(op==36)
        {
            mostrarlab2(liLab2, liC, liO, liG, &c, &o, &g);
        }
    }
    while(op!=0);

}
