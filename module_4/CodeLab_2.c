#include <stdio.h>
#include <string.h>

int main() {
    char string[1000];
    int i, j, n = 0;
    char unik[1000];

    printf("Masukkan sebuah string: ");
    scanf("%[^\n]", string);

    for(i = 0; i < strlen(string); i++) {
        int cek = 1;
        for(j = 0; j < n; j++) {
            if((string[i] == unik[j]) || string[i] == ' ') {
                cek = 0;
                break;
            }
        }
        if(cek == 1) {
            unik[n++] = string[i];
        }
    }

    printf("Karakter unik dalam string adalah: ");
    for(i = 0; i < n; i++) {
        printf("%c ", unik[i]);
    }
    printf("\n");

    return 0;
}