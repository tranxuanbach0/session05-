#include <stdio.h>

int main(){
	int target = 10;
	int input;
	do{
		printf("hay nhap so dung\n");
		scanf("%d",&input);
		
		if (input!=target){
			printf("sai\n");
		}
	}
     while (input!=target);
	printf("dung",target); 
	return 0;
}
