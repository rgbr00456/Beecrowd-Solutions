#include <stdio.h>
#include <math.h>

int main(){

  int s, t;
  scanf("%d %d", &s, &t);

  int a, b;
  scanf("%d %d", &a, &b);

  int m, n;
  scanf("%d %d", &m, &n);

  int apples = 0;
  for(int i = 0; i < m; i++){
    int d;
    scanf("%d", &d);
    int distancia = a + d;
    if(distancia >= s && distancia <= t){
      apples++;
    }
  }

  int oranges = 0;
  for(int i = 0; i < n; i++){
    int d;
    scanf("%d", &d);
    int distancia = b + d;
    if(distancia >= s && distancia <= t){
      oranges++;
    }
  }

  printf("%d\n%d\n", apples, oranges);
}




