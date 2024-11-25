#include <stdio.h>

int main() {
    float num1, num2;
    int choice;
      printf("nhap so thu nhat: ");
    scanf("%f", &num1);
    printf("nhap so thu hai: ");
    scanf("%f", &num2);
        do {
        	    printf("\n--- CALCULATOR ---\n");
        printf("1. tong 2 s?\n");
        printf("2. hieu 2 s?\n");
        printf("3. tich 2 s?\n");
        printf("4. thuong 2 s?\n");
        printf("5. thoat\n");
        printf("lua chon cua ban: ");
        scanf("%d", &choice);
           switch (choice) {
            case 1:
                printf("tong cua %.2f và %.2f la: %.2f\n", num1, num2, num1 + num2);
                break;
            case 2:
                printf("hieu cua %.2f và %.2f la: %.2f\n", num1, num2, num1 - num2);
                break;
            case 3:
                printf("tich cua %.2f và %.2f la: %.2f\n", num1, num2, num1 * num2);
                break;
            case 4:
                if (num2 != 0) {
                    printf("thuong cua %.2f và %.2f la: %.2f\n", num1, num2, num1 / num2);
                } else {
                    printf("ko the chia cho 0.\n");
                }
                break;
            case 5:
                printf("thoat chuong trinh.\n");
                break;
            default:
                printf("lua chon ko hop li.\n");
        }
    } while (choice != 5);
        return 0;
}
