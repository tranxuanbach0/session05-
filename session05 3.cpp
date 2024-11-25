#include <stdio.h>

int main(){
	int sum = 0;
	int n;
	do{
		printf("hay nhap 1 so duong ");
		scanf("%d",&n);
		if(n<0){
			printf("day ko phai so duong\n");
		}
	}while (n<0);
	for (int i=1;i<=n;i++){
		sum+=i;
	}
    printf("tong cac so tu 1 den %d la %d",n,sum);
    
	return 0;
}
