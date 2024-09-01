#include <stdio.h>
#include <stdlib.h>

int main() {
	
	int sayi,kup=1,i;
	
	printf("Kupu alinacak sayiyi girin: ");
	scanf("%d",&sayi);
	
	for(i=1;i<=3;i++){
		kup = kup*sayi;
		
	}
	
	printf("%d sayisinin kupu : %d", sayi, kup);
	
	
	return 0;
