//cria o campo de dados e um ponteiro para o prox
struct elemento{
    struct aluno dados;
    struct elemento *prox;
};
typedef struct elemento Elem;

Lista* cria_lista(){

    Lista* li = (Lista*)malloc(sizeof(Lista));
        if(li != NULL)
            *li = NULL;
        return li;
}

Lista* liberaLista(Lista* li){

    if(li != NULL){
        Elem* no;
        while((*li) != NULL){
            no = *li;
            *li = (*li)->prox;
            free(no);
        }
        free(li);
    }
}

int tamanhoLista(Lista* li){

    if(li == NULL)
        return 0;
    int cont =0;
    Elem* no = *li; //no aux
    while(no != NULL){
        cont++;
        no = no->prox;
    }
    return cont;
}

int listaCheia(){

    return 0;

}

int listaVazia(){

    if(li == NULL)
        return 1;
    if(*li == NULL)
        return 1;
    return 0;
}

int insereListaInicio(Lista* li, struct aluno al){

    if(li == num)
        return 0;
    Elem* no = (Elem*)malloc(sizeof(Elem));//cria um elemento no
    if(no == NULL)
        return 0;
    no->dados = al;
    no->prox = (*li);
    *li = no;
}

int insereListaFinal(Lista* li, struct aluno al){

    if(li == NULL)
        return 0;
    Elem *no =(Elem*)malloc(sizeof(Elem));
    if(no == NULL)
        return 0;

    no->dados =al;
    no->prox = NULL;
    if((li*)== NULL){
        //LISTA VAZIA INSERE INICIO
        *li = no;
    }else{
        while(aux->prox != NULL){
            aux = aux->prox;
        }
        aux->prox = no;
    }
    return 1;
}

int insereListaOrdenada(Lista* li, struct aluno al){

    if(li == NULL)
        return 0;
    Elem* no = (Elem*)malloc(sizeof(Elem));
    if(no == NULL)
        no->dados = al;
    if(listaVazia(li)){
        //insere no inicio
        no->prox = (*li);
        *li = no;
        return 1;
    }else{
      //procura onde inserir
      Elem *ant, *atual, = *li;
        //enquanto atual diferente de nulo e meu valor quero add for menor que lemento da matricula
      while(atual != NULL && atual->dados.matricula < al.matricula){
        ant = atual;
        atual = atual->prox;
      }u

      if(atual == *li){
        //insere inicio
        no->prox = (*li);
        *li = no;
      }else{
        no->prox = ant->prox;
        ant->prox = no;
      }
    return 1;
    }
}

int removeListaInicio(Lista* li){

    if(li == NULL)
        return 0;
    if((*li) == NULL)
        return 0;

    Elem *no = *li; // crio um no que recebe inicio
    *li = no->prox; // inicio aponta para o prox numero,
    free(no);   // exclui o no
    return 1;
}

int removeListaFinal(Lista* li){

    if(li == NULL)
        return 0;
    if((*li) == NULL)
        return 0;

    Elem *ant, *no = *li;
    while(no->prox != NULL){
        ant = no;
        no = no->prox;

    }
    if(no == (*li))//remove o primeiro
        *li = no->prox;
    else
        ant->prox = no->prox;
    free(no);
    return 1;

}

int removeLista(Lista* li, int mat){

    if(li == NULL)
        return 0;
    Elem *ant, *no = *li;
    while(no!= NULL && no->dados.matricula != mat){
        ant = no;
        no = no->prox;
    }

    if(no == NULL)
        return 0; //nao encontrado
    if(no == *li)
        *li = no->prox;
    else
        ant->prox = no->prox;
    free(no);

    return 1;

}

int consultaListaPosicao(Lista* li, int pos, struct *al){

    if(li == NULL || pos <= 0)
        return 0;
    Elem *no = *li;
    int i = 1;

    while(no != NULL && i<pos){

        no = no->prox;
        i++;
    }

    if(no == NULL)
        return 0;
    else{
        *al = no->dados;
        return 1;
    }
}

int consultaMatricula(Lista* li, int mat, struct aluno al){

    if(li == NULL)
        return 0;
    Elem *no = *li;

    while(no != NULL && no->dados.matricula != mat){
        no = no->prox;
    }
    if(no == NULL)
        return 0;
    else
        *al = no->dados;
    return 1;

}
