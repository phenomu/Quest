#include <stdio.h>
int main() {
	int apples = 5, bananas = 8;
	float orangePrice = 1.5, bananaPrice = 0.75;
	char currency = '$';

	//Follow My Github For More_^
	float totalCost = (apples * orangePrice) + (bananas * bananaPrice);
	printf("Jumlah apel: %d\n", apples);
	printf("Jumlah pisang: %d\n", bananas);
	printf("Harga jeruk per buah: %.2f %c\n", orangePrice, currency);
	printf("Harga pisang per buah: %.2f %c\n", bananaPrice, currency);
	printf("Total biaya: %.2f %c\n", totalCost, currency );
	return 0;
}
