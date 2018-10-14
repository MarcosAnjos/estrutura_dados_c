struct aluno{
    int matricula;
    char nome[30];
    float n1,n2,n3;

};
typedef struct elemento* Lista;

Lista* criaLista();
void liberaLista(Lista* li);
int tamanhoLista(Lista* li);
int listaCheia(Lista* li);
int ListaVazia(Lista* li);
int insereListaInicio(Lista* li, struct aluno al);
int insereListaFinal(Lista* li, struct aluno al);
int insereListaOrdenada(Lista* li, struct aluno al);
int removeInicio(Lista* li);
int removeFinal(Lista* li);
int removeLista(Lista* li, int mat);
int consultaPosicao(Lista* li, int pos, struct aluno al);
int consultaMatricula(Lista* li, int mat, struct aluno al);
