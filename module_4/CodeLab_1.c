#include <stdio.h>

int S,N,i;

int main(){

    printf("Masukkan Angka: ");
    scanf("%d", &N);
    for(i=1;N>=i;i++){
        S += i;
    }
    printf("Jumlah angka dari 1 hingga %d adalah %d\n", N,S);
    return 0;

}