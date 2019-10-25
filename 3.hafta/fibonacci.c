#include <stdio.h>


int main(){
	
	int sayi;
	scanf("%d",&sayi);
	
	int i;
	int sayi1=1;
	int sayi2=1;
	int temp=0;
	
	for(i=0;i<sayi;i++){
		if(i==0){
			printf("1\n");
		}else if(i==1){
			printf("1\n");
		}else{
			temp=sayi1+sayi2;
			sayi1=sayi2;
			sayi2=temp;
			printf("%d\n",temp);
			
		}
	}
	
	return 0;
}
