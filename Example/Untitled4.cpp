#include <stdio.h>

int main() {
    // V?ng l?p for ch?y t? 0 �?n 9
    for (int i = 0; i < 10; i++) {
        // Ki?m tra n?u gi� tr? c?a i b?ng 5
        if (i == 11) {
            printf("�? g?p gi� tr? 5, k?t th�c v?ng l?p.\n");
            break;  // D?ng v?ng l?p khi i == 5
        } else {
            printf("i hi?n t?i l�: %d\n", i);
        }
    }
    return 0;
}

