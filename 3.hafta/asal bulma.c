#include <stdio.h>


int main(){
	
	int sayi;
	scanf("%d",&sayi);
	int n=2;
	
	int flag=0;
	
	
	while(n<sayi){
		if(sayi%n==0){
			flag=1;
			break;
		}
		n++;
	}
	if(flag==0){
		printf("Asal");
	}else{
		printf("Asal Degil");
	}
	
	
	return 0;
}
