//estrutura para guardar os alunos
struct aluno{
    int matricula;
    char nome[30];
    float n1,n2,n3.
};
typedef struct elemento* lista;


Lista* cria_lista();
Lista* liberaLista();
int tamanhoLista(Lista* li);
int listaCheia(Lista* li);
int listaVazia(Lista* li);
int insereListaInicio(Lista* li, struct aluno al);
int insereListaFinal(Lista* li, struct aluno al);
int insereListaOrdenada(Lista* li, struct aluno al);
int removeListaInicio(Lista* li);
int removeListaFinal(Lista* li);
int removeLista(Lista* li, int mat);
int consultaListaPosicao(Lista* li, int pos, struct aluno *al);
int consultaMatricula(Lista* li, int mat,  struct aluno *al);

