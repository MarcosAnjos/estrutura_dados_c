#define MAX 100
//LISTA PARA GUARDAR AS INFO DAS STRUCT
struct Lista{
    int qdt;
    struct aluno dados[MAX];
};

Lista* cria_lista(){
    // declara um ponteiro
    Lista *li;
    li = (Lista*) malloc(sizeof(struct lista));
    if(li != NULL)
        li->qdt = 0;
    return li;
}

void liberaLista(Lista* li)
    free(li);

int tamanhoLista(Lista* li){
    if(li == null)
        return -1;
    else
        return li->qdt;
}

int listaCheia(Lista* li){
    if(li == null)
        return -1;
    return (li->qdt == MAX); //retorna - campo qdt igual max (se qdt == max, lista esta cheia)
                            //RETURN 1 VERDADEIRO 0 FALSO
}

int listaVazia(Lista* li){
    if(li == null)
        return -1;
    return(li->qdt == 0); // v = 1 f = 0

}

int insereListaFinal(Lista* li, struct aluno al){

    if(li == null)//VERIFICA SE LISTA VALIDA
        return 0;
    if(listaCheia(li)) //VERIFICA LISTA CHEIA ((MAX))
        return 0;

    li->dados[li->qdt] = al; //A POSICAO APONTADA POR QUANTIDADE RECEBE AL
    li->qdt++; // INCREMENTA QDT ELEMENTOS DA LISTA

    return 1;
}

int insereListaInicio(Lista* li, struct aluno al){

    if(li == null)
        return 0;
    if(listaCheia(li))
        return 0;
    //insere
    for(int i =li->qdt-1;i>=0; i--)
        //DESLOCA TODO MUNOD UMA POSICAO PARA FRENTE
        li->dados[i+1] = li->dados[i];//POSICAO DA FRENTE, RECEBE OS DADOS DO ANTERIOR
    li->dados[0] = al; // INSERE NA 1 POSICAO O VALOR DE AL
    li->qdt++;
    return 1;
}

int insereListaOrdenada(Lista* li, struct aluno al){

    if(li == null)
        return 0;
    if(listaCheia(li))
        return 0;
    int k,i=0;
    //ENQUANDO FOR MENOR A QUANTIDADE, VOU INSERIR ORDENADO PELA MATRICULA
    while(i < li->qdt && li->dados[i].matricula < al.matricula)
        i++;
    //PARA INSERSÃO É COMO SE FOSSE NO INICIO -- FAÇO UM DESLOCAMENTO PARA INSERIR O VALOR NA POSICAO
    for(k = li->qdt-1; k >= i; k--)
        li->dados[k+1] = li ->dados[k];

    li->dados[i] = al; // DADOS NA POSICAO I = AL
    li->qdt++; // INCREMENTA QUANTIDADE

    return 1; // VERDADEIRO
}

int removeListaFinal(Lista* li){

    if(li == null)
        return 0;
    if(li == listaVazia())
        return 0;

    li->qdt--;//DIMINUI UM ELEMENTO
    return 1;
}

int removeListaInicio(Lista* li){

    if(li == NULL)
        return 0;
    if(li == listaVazia())
        return 0;

    int k=0;
    //DESLOCAMENTO UMA POSICAO PARA TRAS, CRESCE OS INDICES
    for(k=0; k< li->qdt-1; k++)
        li->dados[k] = li->dados[k+1]; //POSICAO [K] RECEBE [K+1] ASSIM SOBRESCREVEMOS O VALOR DA POSICAO
    li->qdt--; //DECREMENTADO O QDT
    return 1;
}


int removeLista(Lista* li, int mat){
    if(li == null)
        return 0;
    if(li == listaVazia())
        return 0;

    int k,i =0;
    //ENQUANDO I FOR MENOR QUE QTD E NUMERO DA MATRICUÇA DIFERENTE DO VALOR QUE PASSAR
    while(i < li->qdt && li->dados[i].matricula != mat)
        i++; //ANDA NA LISTA
    //SE FOR IGUAL A QTD -- NÃO EXIXTE NUMERO ENCONTRADO
    if(i == li->qdt)//elemento nao encontrado
        return 0;
    //MESMA IDEIA REMOCAO INICIO
    for(k=i; k< li->qdt-1; k++)
        //TODO MUNDO QUE POSICAO [K] RECEBE [K+1]
        li-->dados[k] = li->dados[k+1];
    //DIMUNUI A QTD DE ELEMENTOS NA LISTA
    li->qdt--;
    return 1;
}
