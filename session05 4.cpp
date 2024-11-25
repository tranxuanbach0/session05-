#include <stdio.h>

int main() {
    int n;
    do{
    	printf("hay nhap 1 so nguyen duong tu 1 den 10:");
    	scanf("%d",&n);
    	if (n<1||n>10){
    		printf("sai\n");
		}
    	}while (n<1||n>10);
    	   printf("bang cua chuong %d:\n", n);
    for (int i = 1; i <= 10; i++) {
        printf("%d x %d = %d\n", n, i, n * i);
    }

    return 0;
}
