#define MAX 100

struct aluno{
    int matricula;
    char nome[30];
    float n1, n2, n3;
};
typedef struct lista Lista;

Lista* cria_lista();
void liberaLista(Lista* li);
int tamanhoLista(Lista* li);
int listaCheia(Lista* li);
int listaVazia(Lista* li);
int insereListaFinal(Lista* li, struct aluno al);
int insereListaInicio(Lista* li, struct aluno al);
int insereListaOrdenada(Lista* li, struct aluno al);
int removeListaFinal(Lista* li);
int removeListaInicio(Lista* li);
int removeLista(Lista* li, int mat);

