#include <stdio.h>


int main(){
	
	int sayi;
	scanf("%d",&sayi);
	int res=0;
	int i;
	
	for(i=1 ; i<=sayi ; i++){
		if(i%2==0){
			res+=i;
		}
	}
	printf("Cevap:%d",res);
	
	
	return 0;
}
