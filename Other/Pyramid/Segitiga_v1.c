int main(){
	
	int tinggi,i,v1;

  //Follow For More_^
	printf("Input tinggi segitiga: ");
	scanf("%d",&tinggi);
	printf("\n");
	for(i=1; i<=tinggi; i++) {
		for(v1=1; v1<=i; v1++) {
			printf("%d ", i);
		}
		printf("\n");
	}
	return 0;
}
