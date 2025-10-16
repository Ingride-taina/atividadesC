//variáveis (ponteiro)

/*  Um ponteiro é uma variável que não guarda um 
valor “comum”, mas sim o endereço de memória onde esse valor está 
guardado na memória do computador. Ou seja, com um ponteiro, 
você consegue “apontar” ou localizar o lugar onde a informação está 
armazenada na memória principal do computador, e isso dá uma 
liberdade e flexibilidade enormes para manipular os dados

declaração:
<tipo_de_dado> *<nome_do_ponteiro>;
*/

/* Podemos imaginar que receita tem uma setinha invisível que aponta para ingrediente.
Se usar *receita no código, significa:

“vá até o lugar onde ap está apontando (que é ingrediente) e pegue/alterar o valor de lá”*/

//ponteiro "receita" que aponta o endereço de um "ingrediente"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main (){

char ingrediente[10] = "pao";
char *receita;
receita= ingrediente;
strcpy(receita, "bolo");


// Para exibir o endereço de uma variável qualquer na tela utiliza-se o formatador %p.
   printf("endereco var ingrediente:\n %p", ingrediente);  
   printf("\nvalor da variavel apontada:\n %s", receita);
   printf("\n valor novo:\n %s", ingrediente);



 struct cadastro{
 char nome[50];
 int idade;
 char rua[50];
 int numero;
 } cad1, cad2;

 struct cadastro c1, c2, c3, c4;

}

 
/*Um ponteiro pode ser inicializado com NULL (para sinalizar que 
não contém nenhum endereço), quando não aponta para nenhuma 
variável. NULL é uma constante definida na biblioteca <stdlib.h>.
Exemplo:*/