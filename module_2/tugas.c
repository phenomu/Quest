#include <string.h>
#include <stdio.h>

int main() {
    int total_mapel,i;
    
    printf("Masukan Jumlah Mapel: ");
    scanf("%d", &total_mapel);

    char mapel[total_mapel][20];
    float rata, nilai[total_mapel];

    for(i=0; i<total_mapel; i++){
        printf("Masukan Mapel Ke %d: ",i+1);
        scanf("%s", mapel[i]);
    }printf("Input Nilai\n");

    for(i=0; i<total_mapel; i++){
        printf("Masukan nilai %s: ", mapel[i]);
        scanf("%f", &nilai[i]);
    }printf("==============");
    
    for(i=0; i<total_mapel; i++){
        rata += nilai[i];
        printf("\nNilai %s Kamu : %g", mapel[i], nilai[i]);
    }

    printf("\nNilai Rata2 Dari Ke %d Mapel Tersebut Adalah: %.2f\n", total_mapel, (rata / total_mapel));
    return 0;
}
