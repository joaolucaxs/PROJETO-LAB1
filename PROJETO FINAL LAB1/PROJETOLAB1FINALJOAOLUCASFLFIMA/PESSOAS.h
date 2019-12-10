#ifndef PESSOAS_H_INCLUDED
#define PESSOAS_H_INCLUDED
void inserirOrganizador(LISTA5 *liOrg, ORGANIZADOR org);
void mostrarOrganizador(LISTA5 *liOrg);
void removerOrganizador(LISTA5 *liOrg);
void alterarOrganizador(LISTA5 *liOrg);
void NovoOrganizador(ORGANIZADOR *org);
void inserirPalestrante(LISTA4 *liPal, PALESTRANTE pal);
void mostrarPalestrante(LISTA4 *liPal);
void removerPalestrante(LISTA4 *liPal);
void alterarPalestrante(LISTA4 *liPal);
void NovoPalestrante(PALESTRANTE *pal);
void inserirCongressista(LISTA6 *liCon, CONGRESSISTA con);
void mostrarCongressista(LISTA6 *liCon);
void removerCongressista(LISTA6 *liCon);
void alterarCongressista(LISTA6 *liCon);
void NovoCongressista(CONGRESSISTA *con);

#endif // PESSOAS_H_INCLUDED
