#include <stdio.h>
enum Makanan {
        Mie, Bakso, Cireng, Nasgor, Batagor
    };
enum Minuman {
        Jeruk, Buah, Teh, Nutrisari, Milo
    };
int PilihMakan, PilihMinum;
float Harga, Pembayaran;
char Member;

int main() {

    printf("1. Mie Goreng\tRp. 10.000\n2. Bakso\tRp. 8.000\n3. Cireng\tRp. 5.000\n4. Nasi Goreng\tRp. 10.000\n5. Batagor\tRp. 5.000\n");
    printf("Pilih menu makanan (1-5): ");
    scanf("%d", &PilihMakan);
    
    printf("\n\n1. Es Jeruk\tRp. 4.000\n2. Es Buah\tRp. 8.000\n3. Es Teh\tRp. 4.000\n4. Es Nutrisari\tRp. 5.000\n5. Es Milo\tRp. 6.000\n");
    printf("Pilih menu minuman (1-5): ");
    scanf("%d", &PilihMinum);

    switch(PilihMakan){
        case 1:
            Harga += 10000;
            break;
        case 2:
            Harga += 8000;
            break;
        case 3:
            Harga += 5000;
            break;
        case 4:
            Harga += 10000;
            break;
        case 5:
            Harga += 5000;
            break;
        default:
            printf("Makanan Yang Anda Minta Tidak Tersedia");
    }printf("\n");

    switch(PilihMinum){
        case 1:
            Harga += 4000;
            break;
        case 2:
            Harga += 8000;
            break;
        case 3:
            Harga += 4000;
            break;
        case 4:
            Harga += 5000;
            break;
        case 5:
            Harga += 6000;
            break;
        default:
            printf("Minuman Yang Anda Minta Tidak Tersedia");
    }
    printf("Apakah Anda Adalah Member (Y/N): ");
    scanf(" %c", &Member);

    if(Member=='y'||Member=='Y'){
        Harga = Harga - (Harga * 10) / 100;
    }

    printf("Total Harga: Rp. %.2f\n", Harga);
    printf("Alamat Memori Variable Total: %p\n", &Harga);
    printf("Masukan Uang Pembayaran: ");
    scanf("%f", &Pembayaran);
    printf("Kembalian Anda: Rp. %.2f\n",(Pembayaran - Harga));

    return 0;
}