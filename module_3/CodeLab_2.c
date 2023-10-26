#include <stdio.h>
enum Film {
        Unstoppable, Insidious, Us
    };
int pilih, genre;

int main() {

    printf("1. Unstoppable\n2. Insidious\n3. Us\n");
    printf("Pilihan anda: ");
    scanf("%d", &pilih);

    if(pilih == 1){
        genre = Unstoppable;
    }else if(pilih == 2){
        genre = Insidious;
    }else if(pilih == 3){
        genre == Us;
    }else{
        printf("Film Yang Anda Pilih Tidak tersedia\n");
    }
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
    }printf("\n");
    return 0;
}
