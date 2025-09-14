#include <stdio.h>

int main() {
    int start, stop;

    while (1) { // วนรับค่าจนกว่าจะถูกต้อง
        printf("Enter start number: ");
        scanf("%d", &start);
        printf("Enter stop number: ");
        scanf("%d", &stop);

        if (start < stop) {
            // แสดงตัวเลขจาก start ถึง stop
            for (int i = start; i <= stop; i++) {
                printf("%d ", i);
            }
            break; // ออกจาก loop
        } 
        else if (start == stop) {
            printf("Your Start number is equal to Stop number, please try again!\n");
        } 
        else { // start > stop
            printf("Your Start number is greater than Stop number, please try again!\n");
        }
    }

    return 0;
}