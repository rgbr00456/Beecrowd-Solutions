#include <stdio.h>
#include <math.h>

int main(){
  int nroBuracos;
  float coelhoX, coelhoY, raposaX, raposaY;
  scanf("%d", &nroBuracos);
  scanf("%f %f %f %f", &coelhoX, &coelhoY, &raposaX, &raposaY);

  float buracos[nroBuracos][2];

  for(int i = 0; i < nroBuracos; i++){
    scanf("%f %f", &buracos[i][0], &buracos[i][1]);

    float distanciaCoelho = sqrt(pow(buracos[i][0] - coelhoX, 2) + pow(buracos[i][1] - coelhoY, 2));
    float distanciaRaposa = sqrt(pow(buracos[i][0] - raposaX, 2) + pow(buracos[i][1] - raposaY, 2));

    if (distanciaCoelho <= distanciaRaposa/2){
      printf("O coleho pode escapar pelo buraco (%.3f,%.3f).\n", buracos[i][0], buracos[i][1]);
      return 0;
    }
  }

  printf("O coelho nao pode escapar.\n");

  return 0;
}