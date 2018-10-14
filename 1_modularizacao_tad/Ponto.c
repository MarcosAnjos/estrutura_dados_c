
/*
    A CONVERSÃO EM LINGUAGEM C É PREPARAR DOIS ARQUIVOS PARA IMPLEMENTAR UM TAD
        ARQUIVO .H : PROTOTIPOS DAS FUNÇÕIES, TIPOS DE PONTEIROS E DADOS GLOBALMENTE ACESSAVEL
        ARQUIVO .C : DECLARAÇÃO DO TIPO DE DADOS IMPLEMENTAÇÃO DAS FUNÇÕES DAS SUAS FUNÇÃO

        ASSIM SEPARAMOS O CONCEIRO DE SUA IMPLEMANTAÇÃO



        EXEMPLO DE TAD:
        UM PONTO DEFINIDO POR SUAS CORDENADAS X E Y

    */
#include <stdio.h>
#include <stdlib.h>
#include "Ponto.h" // INCLUI OS PROTOTIPOS



        struct ponto{

            float x;
            float y;

        };

        Ponto* pto_cria(float x, float y){
            Ponto* p = (Ponto*) malloc(sizeof(Ponto));
            if(p != NULL){
                p->x = x;
                p->y = y;
            }
            return p;
        }
        //LIBERA PONTO
        void pto_libera(Ponto* p){
            free(p);
        }


        //RECUPERA, POR REFERENCIA, O VALOR DE UM PONTO (CARREGO OS VALORES DENTRO DE X E Y)
        void pto_acessa(Ponto* p, float* x, float* y){
            *x = p->x;
            *y = p->y;
        }

        //ATRIBUICAO A UM PONTO AS COORDENADAS X E Y
        void pto_atribui(Ponto* p ,float x, float y){
            p ->x = x;
            p ->y = y;

        }

        //CALCULA DISTANCIA ENTRE DOIS PONTOS
        float pto_distancia(Ponto* p1, Ponto* p2){
            float dx = p1->x - p2->x;
            float dy = p1->y - p2->y;

            return sqrt(dx * dx + dy * dy);

        }

