#include <stdio.h>
	
int main(){
	
	int tinggi,i,v1,v2;

	//Follow For More_^
	printf("Input tinggi segitiga: ");
	scanf("%d",&tinggi);
	printf("\n");
	for(i=1; i<=tinggi; i++) {
	  for(v1=1; v1<=tinggi-i; v1++) {
	    printf(" ");
	  }
	  for(v2=1; v2<=i; v2++) {
	    printf("* ");
	  }
	  printf("\n");
	}
	return 0;
}
