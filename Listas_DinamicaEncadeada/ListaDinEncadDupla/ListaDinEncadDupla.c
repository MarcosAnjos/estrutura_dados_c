struct elemento{

    struct elemento *ant;
    struct aluno dados;
    struct elemento *prox;
};
typedef struct elemento Elem;

Lista* criaLista(){

    Lista* li =(Lista*)malloc(sizeof(Lista));
    if(li != NULL)
        *li = NULL;
    return li;

}


void liberaLista(Lista* li){

    if(li != NULL)
        Elem* no;
    while((*li) != NULL){
        no = *li;
        *li = (*li)->prox;
        free(no);

    }
    free(li);
}


int tamanhoLista(Lista* li){

    if(li == NULL)
        return 0;
    int cont = 0;
    Elem* no = *li;

    while(no != NULL){

        cont ++;
        no = no0->prox;
    }
    return cont;
}


int listaCheia(Lista* li){

    return 0;
}

int ListaVazia(Lista* li){

    if(li == NULL)
        return 1;
    if(*li == NULL)
        return 1;
    return 0;
}

int insereListaInicio(Lista* li, struct aluno al){

    if(li == NULL)
        return 0;
    Elem *no = (*Elem)malloc(sizeof(Elem));

    if(no == NULL)
        return 0;

    no->dados = al;
    no->prox = (*li);
    no->ant = NULL;

    //LISTA NAO VAZIA APONTA PARA O ANTERIOR
    if(*li != ant = no)
        (*li)->ant = no;
    *li = no;
    return 1;
}

int insereListaFinal(Lista* li, struct aluno al){

    if(li == NULL)
        return 0;

    Elem *no = (Elem*)malloc(sizeof(Elem));

    if(no == NULL)
        return 0;
    no->dados = al;
    no->prox = NULL;
    if((*li) == NULL){
        //tratamento vazia
        no->ant = NULL;
        *li = no;
    }else{
        Elem *aux = *li;
        while(aux->prox != NULL)
            aux = aux->prox;
        aux->prox = no;
        no->ant = aux;
    }
    return 1;
}

int insereListaOrdenada(Lista* li, struct aluno al){

    if(li == NULL)
        return 0;
    Elem* no = (*Elem)malloc(sizeof(Elem));

    if(no != NULL)
        return 0;

    no->dados = NULL;
    if(ListaVazia(li)){
        //INSERE NO INICIO
        no->prox = NULL;
        no->ant = NULL;
        *li = no;
        return 1;
    }
    else{
        //PROCURA ONDE INSERIR
        Elem *ant, *atual = *li;
        while(atual != NULL && atual->dados.matricula < atual){
            ant = atual;
            atual = atual->prox;
        }
        if(atual == *li){
            no ->ant = NULL;
            (*li)->ant = no;
            no->prox = (*li);
            *li = no;
        }else{
            no->prox = ant->prox;
            no->ant = ant;
            ant->prox = no;
            if(atual != NULL)
                atual->ant = no;
        }
        return 1;

    }
}


int removeInicio(Lista* li){

    if(li == NULL)
        return 0;
    if((*li)==NULL)
        return 0;

    Elem *no = *li;

    *li = no->prox;
    if(no->prox != NULL)
        no->prox->ant = NULL;

    free(no);
    return 1;
}

int removeFinal(Lista* int){

    if(li == NULL)
        return 0;
    if((*li) == NULL)
        return 0;

    Elem *no = *li;
    while(no->prox != NULL)
        no = no->prox;

    if(no->ant == NULL)//remove o primeiro e unico
        *li = no->prox;
    else
        no->ant->prox =NULL;

    free(no);
}

int removeLista(Lista* li, int mat){

    if(li == NULL)
        return 0;

    Elem *no = *li;
    while(no != NULL && no->dados.matricula != mat){
        no = no->prox;
    }
    if(no== NULL)
        return 0;
    if(no->ant == NULL)
        *li = no->prox;//remover o primeiro
    else
        no->ant->prox = no->prox;

    //noa é ultimo
    if(no->prox != NULL)
            no->prox->ant = no->ant;
    free(no);

    return 1;


}

int consultaPosicao(Lista* li, int pos, struct aluno al){

    if(li == NULL)
        return 0;

    Elem *no = *li;

    int i = 1;
    while(no != NULL && i < pos){
        no = no->prox;
        i++;
    }

    if(no == NULL)
        return 0;
    else
        *al= no->dados;
    return 1;
}

int consultaMatricula(Lista* li, matricula, struct aluno al){

    if(LI == NULL)
        return 0;
    Elem *no = *li;

    while(no != NULL && no->dados.matricula != mat){
        no = no->prox;

    }
    if(no == NULL)

        return 0;
    }else
    *al = no->dados;
