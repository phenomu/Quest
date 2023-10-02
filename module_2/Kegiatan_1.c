#include <stdio.h>
int main() {

    float Mat,Fis,Bio,Rata2;

    printf("=== Perhitungan Nilai Rata-rata ===\n\n");
    printf("Masukkan Nilai Matematika: ");
    scanf("%f", &Mat);
    printf("Masukkan Nilai Fisika: ");
    scanf("%f", &Fis);
    printf("Masukkan Nilai Biologi: ");
    scanf("%f", &Bio);

    Rata2 = (Mat + Fis + Bio) / 3;
    printf("\nNilai Rata-rata: %.2f\n", Rata2);

    return 0;
}