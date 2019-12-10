#ifndef EVENTOS_H_INCLUDED
#define EVENTOS_H_INCLUDED
void NovaPalestra(PALESTRA *p);
void inserirPalestra(LISTA *liP, PALESTRA p);
void mostrarPalestra(LISTA *liP, CONGRESSISTA *c, PALESTRANTE *pal, LISTA4 *liPal, LISTA5 *liCon);
void removerPalestra(LISTA *liP);
void alterarPalestra(LISTA *liP);
void inserirCurso(LISTA1 *liC, CURSO c);
void mostrarCurso(LISTA1 *liC, CONGRESSISTA *c, PALESTRANTE *pal, LISTA4 *liPal, LISTA5 *liCon);
void removerCurso(LISTA *liC);
void alterarCurso(LISTA *liC);
void inserirOficina(LISTA2 *liO, OFICINA o);
void mostrarOficina(LISTA2 *liO, CONGRESSISTA *c, PALESTRANTE *pal, LISTA4 *liPal, LISTA5 *liCon);
void removerOficina(LISTA2 *liO);
void alterarOficina(LISTA2 *liO);
void inserirGrupo(LISTA3 *liG, GRUPOS g);
void mostrarGrupo(LISTA3 *liG, CONGRESSISTA *c, PALESTRANTE *pal, LISTA4 *liPal, LISTA5 *liCon);
void removerGrupo(LISTA3 *liG);
void alterarGrupo(LISTA3 *liG);
void NovoGrupo(GRUPOS *g);
void NovaOficina(OFICINA *o);
void NovoCurso(CURSO *c);
#endif // EVENTOS_H_INCLUDED
