//================================================================
// Nome Do Arquivo: insertion.c
//
// Descricao: Implementacao do algoritmo de ordenacao por insercao
//================================================================

// Libs
#include <stdio.h>
#include <stdlib.h>

// Define uma constante
#define MAX 5

// Prototipo da funcao de ordenacao
void insertion_sort (int *V);

int
main (int argc, char **argv)
{
  int i, vetor[MAX];

  // MAX ou 10 valores
  for (i = 0; i < MAX; i++)
    {
      printf ("Digite um valor: ");
      scanf ("%d", &vetor[i]);
    }

  printf ("\nOrdem inicial dos itens no array:\n");
  for (i = 0; i < MAX; i++)
    {
      printf ("%4d", vetor[i]);
    }

  // Chamada da funcao que ordena os valores
  insertion_sort (vetor);

  // Imprime os valores ordenados
  printf ("\nElementos do array em ordem crescente:\n");
  for (i = 0; i < MAX; i++)
    {
      printf ("%4d", vetor[i]);
    }
}

// Funcao de Ordenacao por Insercao
void
insertion_sort (int *a)
{
  int i, j, aux;

  for (i = 1; i < MAX; i++)
    {
      aux = a[i];
      for (j = i - 1; j >= 0 && aux < a[j]; j--) //deslocamento para a direita vai entrar nesse laço se o anterior for menor que o atual
	{
	  a[j + 1] = a[j];  //deslocamento para a direita do numero maior
	}
      a[j + 1] = aux; //insere o elemento na parte ordenada
    }
}
*/
//Segunda opção
// Funcao de Ordenacao por Insercao
void
insertion_sort (int *V)
{ int i, j, aux;

  for (i = 1; i < MAX; i++)
    {
      aux = V[i];
	  
      for (j = i; (j > 0) && (aux < V[j - 1]); j--){
	        V[j] = V[j - 1]; //inserido valor anterior que é maior no indice a frente
      }      
      V[j] = aux; //inserido valor menor ao indice anterior
    }

}
