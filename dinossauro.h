#ifndef DINOSSAURO_H
#define DINOSSAURO_H

#define TAM 32
#define TRUE 1
#define FALSE 0

typedef struct dinossauro
{
  int numBlocos;
  int *id;
  int *peso;
  int *capacidade;
} dinossauro;

dinossauro *criaDinossauro();
dinossauro preencheVariaveisPt1(dinossauro *dino);
void abreArq();
void fechaArq();

#endif // DINOSSAURO_H
