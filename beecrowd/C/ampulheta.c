#include <stdio.h>
#include <math.h>

int main(){

  int arr[6][6];
  int soma_max = 0;
  for(int i = 0; i < 6; i++){
    for(int j = 0; j < 6; j++){
      scanf("%d", &arr[i][j]);
    }
  }

  for (int i = 0; i < 4; i++) {
    for (int j = 0; j < 4; j++) {

      int soma_atual =
          arr[i][j]   + arr[i][j+1]   + arr[i][j+2]
        + arr[i+1][j+1]
        + arr[i+2][j] + arr[i+2][j+1] + arr[i+2][j+2];

      if (soma_atual > soma_max) {
        soma_max = soma_atual;
      }
    }
  }

  printf("%d\n", soma_max);


  return 0;
}