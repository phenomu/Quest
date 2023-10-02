#include <stdio.h>
enum Film {
        Unstoppable, Insidious, Us
    };
int pilih;

int main() {

    printf("1. Unstoppable\n2. Insidious\n3. Us\n");
    printf("Pilihan anda: ");
    scanf("%d", &pilih);
    switch(pilih){
        case 1:
            printf("Film Action");
            break;
        case 2:
            printf("Film Horror");
            break;
        case 3:
            printf("Film Thriller");
            break;
        default:
            printf("Film Yang Anda Minta Tidak Tersedia");
    }printf("\n");
    return 0;
}