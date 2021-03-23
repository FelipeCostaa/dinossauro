#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "dinossauro.h"

/*
  O arquivo de entrada segue o seguinte padrão:
  Primeira linha: Numero de blocos
  Proximas linhas: São os blocos correspondentes ao dinossauro
    1ª coluna: id
    2ª coluna: peso do bloco
    3ª coluna: capacidade do bloco

    *Peso e capacidade variam de 1 a 1000
*/

FILE *arq = NULL;

dinossauro *criaDinossauro()
{
  dinossauro *dino = (dinossauro *)malloc(sizeof(dinossauro));
  if (dino == NULL)
  {
    printf("\nErro ao alocar memoria!\n");
  }

  dino->numBlocos = -1;
  dino->id = NULL;
  dino->id = (int *)malloc(sizeof(int));
  dino->peso = NULL;
  dino->peso = (int *)malloc(sizeof(int));
  dino->capacidade = NULL;
  dino->capacidade = (int *)malloc(sizeof(int));

  return dino;
}

dinossauro preencheVariaveisPt1(dinossauro *dino)
{
  char linha[TAM];

  while (fgets(linha, sizeof(linha), arq))
  {
    char *token;

    token = strtok(linha, "\n");

    while (token != NULL)
    {
      printf("%s", token);
      token = strtok(NULL, "\n");
    }
    printf("\n");
  }

  return *dino;
}

void abreArq()
{
  char nomeArquivo[TAM];
  char enderecoArqEntrada[TAM] = "arqEntrada//";

  setbuf(stdin, NULL);
  printf("\nNome do arquivo a ser aberto: ");
  scanf("%[^\n]s", &nomeArquivo);

  strcat(enderecoArqEntrada, nomeArquivo);

  arq = fopen(enderecoArqEntrada, "r");
  if (arq == NULL)
  {
    printf("\nErro!Arquivo de entrada inexistente!\n");
    // exit(1);
  }
  else
  {
    printf("\nArquivo aberto com sucesso!\n");
  }
}

void fechaArq()
{
  fclose(arq);
}
