#include <stdio.h>

int main() {
    int target = 25; 
    int userInput;

    do {
        printf("Nhap vao mot so: ");
        scanf("%d", &userInput);

        if (userInput != target) {
            printf("Sai, hay thu lai!\n");
        }
    } while (userInput != target);

    printf("Chinh xac! Ket thuc chuong trinh.\n");

    return 0;
}

