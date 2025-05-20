#include <stdio.h>

int chocoCount(int s[], int n, int d, int m){

    if (m == 0 || m > n ){
        return 0;
    }

    int count = 0;

    for (int i = 0; i <= n - m; i++){
        int soma = 0;

        for (int j = i; j < i + m; j++){
            soma += s[j];
        }

        if (soma == d){
            count++;
        }
    }
    return count;
}

int main(){

    int n, m, d;
    scanf("%d", &n);

    int s[n];
    for (int i = 0; i < n; i++){
        scanf("%d", &s[i]);
    }

    scanf("%d %d", &d, &m);

    int result = chocoCount(s, n, d, m);
    printf("%d", result);

    return 0;
}
