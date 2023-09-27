#include <stdio.h>
int main() {

	/*
	SJ = SapiJantan | SB = SapiBetina
	KJ = KambingJantan | KB = KambingBetina
	*/
	float SJ1,SJ2,SB1,SB2;
	const float KJ1=120, KJ2=85.8, KB1=23;

	//Berat Sapi 1 = 550
	printf("Masukan Berat Sapi 1:");
	scanf("%f", &SJ1);
	//Berat Sapi 2 = 535.6
	printf("Masukan Berat Sapi 2:");
	scanf("%f", &SJ2);
	//Berat Sapi 3 = 498.23
	printf("Masukan Berat Sapi 3:");
	scanf("%f", &SB1);
	//Berat Sapi 4 = 628
	printf("Masukan Berat Sapi 4:");
	scanf("%f", &SB2);printf("\n");
	
	printf("Hasil Berat Sapi: %.2f\n", SJ1+SJ2+SB1+SB2 );
	printf("Hasil Berat Kambing: %.2f\n", KJ1+KJ2+KB1 );

	return 0;
}