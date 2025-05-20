#include <stdio.h>
#include <stdlib.h>

typedef struct{
  char* nome;
  double* notas;
  double* media;
} Aluno;

Aluno* alocaAluno(int tamNome, int qtNotas);
void liberaAluno(Aluno* pt_aluno);
void lerTeclado(Aluno* pt_aluno);

int main(){
  Aluno aluno;

  Aluno* pt_aluno = alocaAluno(1000, 5);

  printf("Nome do aluno: %s\n", pt_aluno->nome);
  for(int i = 0; i < 5; i++){
    printf("Nota %d do aluno: %.2f\n", i+1, pt_aluno->notas[i]);
  }

  liberaAluno(pt_aluno);

  return 0;
} //end main

Aluno* alocaAluno(int tamNome, int qtNotas){
  Aluno* pt_aluno = (Aluno *) malloc(sizeof(Aluno));

  pt_aluno->nome = (char*) malloc(tamNome*sizeof(char));
  pt_aluno->notas = (double *) malloc(qtNotas*sizeof(double));

  return pt_aluno;

} //end alocaAluno

void lerTeclado(Aluno* pt_aluno){

  printf("Digite o nome do aluno: \n");
  scanf("%[^\n]s", &pt_aluno->nome);
  getchar();

  for (int i = 0; i < 5; i++){
    printf("Digite a nota %d do aluno %s\n", i+1, pt_aluno->nome);
    scanf("%f", &pt_aluno->notas[i]);
    getchar();
  }

} //end lerTeclado

void liberaAluno(Aluno* pt_aluno){

  free(pt_aluno->nome);
  free(pt_aluno->notas);
  free(pt_aluno);

} //end liberaAluno
