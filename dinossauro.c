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

  int contLinha = 0;
  int contCampo = 0;
  int i = 0;

  while (fgets(linha, sizeof(linha), arq))
  {
    char *token = strtok(linha, "\n"); // separa as linhas do arquivo de entrada
    printf("%s", token);

    contCampo = 0;
    contLinha++;
    if (contLinha == 1)
    {
      dino->numBlocos = atoi(token);
    }

    // char *valor = strtok(linha, " ");

    printf("\n");
  }

  return *dino;
}

void abreArq() // abre o arquivo com os dados do dinossauro
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
    printf("\nErro! Arquivo de entrada inexistente!\n");
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
