#include <stdio.h>


int main(){
	
	int sayi;
	scanf("%d",&sayi);
	int res=1;
	
	
	while(sayi>1){
		res *= sayi;
		sayi--;
		
	}
	printf("Cevap:%d",res);
	
	
	return 0;
}
