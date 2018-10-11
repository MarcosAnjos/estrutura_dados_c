typedef struct ponto Ponto;

//CRIA UM NOVO PONTO
Ponto* pto_cria(float x, float y);

//LIBERA UM PONTO
void pto_libera(Ponto* p);

//ACESSA OS VALORES DE X E Y EM UM PONTO
void pto_acessa(Ponto* p, float* x, float* y);

//ATRIBUI OS VALORES X E Y A UM PONTO
void pto_atribui(Ponto* p, float x, float y);

//CALCULA A DISTANCIA ENTRE DOIS PONTOS
float pto_distancia(Ponto* p1, Ponto* p2);



