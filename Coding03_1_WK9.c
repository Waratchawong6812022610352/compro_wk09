#include <stdio.h>

int main() {
    int i = 1;
    while (i <= 10) {
        if (i == 6) {
            i++;       // ต้องบวกก่อน ไม่งั้นติดลูป
            continue;  // ข้ามการแสดงผล
        }
        printf("%d\n", i);
        i++;
    }
    return 0;
}