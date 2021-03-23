/*
Autor: Felipe de Assis Costa
RA: 0049539
Data:
*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "dinossauro.h"

int main(int argc, char const *argv[])
{
  int menu;

  dinossauro *dino = criaDinossauro();

  while (1)
  {
    printf("\n1 - Inserir dinossauro\n2 - Mover dinossauro"
           "\n3 - Quantidade de dinossauros cadastrados\n0 - Sair\n--> ");
    scanf("%d", &menu);

    switch (menu)
    {
    case 0: // sair
      printf("\nSaindo...\n");
      free(dino);
      exit(1);
      break;

    case 1: // inserir
      abreArq();
      preencheVariaveisPt1(dino);
      fechaArq();

      break;

    case 3: // mover

      break;

    case 4: // quantidade de dinossauros

      break;

    default:
      printf("\nOpção invalida!\n");
      break;
    }
  }

  return 0;
}
