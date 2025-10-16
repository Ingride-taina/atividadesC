
#include<stdio.h>

typedef struct
{
    int dia, mes, ano;
} Data ;


typedef struct
{
    char nome [50];
    Data data;
} pessoa ;


typedef struct no{
   pessoa p;
   struct no *proximoponteiro;
} No_principal;

pessoa ler_pessoa(){}


int main(int argc, char const *argv[])
{
    /* code */
    return 0;
}
