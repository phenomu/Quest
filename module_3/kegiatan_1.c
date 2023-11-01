#include <stdio.h>
enum Makanan {
        Mie = 10000, Bakso = 8000, Cireng = 5000, Nasgor = 10000, Batagor = 5000
    };
enum Minuman {
        Jeruk = 4000, Buah = 8000, Teh = 4000, Nutrisari = 5000, Milo = 4000
    };
int PilihMakan, PilihMinum;
float Harga, Pembayaran;
char Member;

int main() {

    printf("=== Rumah Makan ===\nMenu Makanan: \n1. Mie Goreng\tRp. 10.000\n2. Bakso\tRp. 8.000\n3. Cireng\tRp. 5.000\n4. Nasi Goreng\tRp. 10.000\n5. Batagor\tRp. 5.000\n\n");
    printf("Pilih menu makanan (1-5): ");
    scanf("%d", &PilihMakan);
    
    printf("\n\nMenu Minuman: \n1. Es Jeruk\tRp. 4.000\n2. Es Buah\tRp. 8.000\n3. Es Teh\tRp. 4.000\n4. Es Nutrisari\tRp. 5.000\n5. Es Milo\tRp. 6.000\n\n");
    printf("Pilih menu minuman (1-5): ");
    scanf("%d", &PilihMinum);

    switch(PilihMakan){
        case 1:
            Harga += Mie;
            break;
        case 2:
            Harga += Bakso;
            break;
        case 3:
            Harga += Cireng;
            break;
        case 4:
            Harga += Nasgor;
            break;
        case 5:
            Harga += Batagor;
            break;
        default:
            printf("Makanan Yang Anda Minta Tidak Tersedia");
    }printf("\n");

    switch(PilihMinum){
        case 1:
            Harga += Jeruk;
            break;
        case 2:
            Harga += Buah;
            break;
        case 3:
            Harga += Teh;
            break;
        case 4:
            Harga += Nutrisari;
            break;
        case 5:
            Harga += Milo;
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
    if( (Pembayaran - Harga) < 0 ){
        printf("Uang Yang Anda Bayarkan Kurang\n");
    }else if(Pembayaran == Harga){
        printf("Terimakasih Telah Berbelanja Di Toko Kami\n");
    }else{
        printf("Kembalian Anda: Rp. %.2f\n",(Pembayaran - Harga));
    }

    return 0;
}
