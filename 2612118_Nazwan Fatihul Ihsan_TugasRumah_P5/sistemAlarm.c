#include <stdio.h>

int main(void) {
    float tegangan, arus, suhu;

    printf("Masukkan tegangan (V): ");
    scanf("%f", &tegangan);

    printf("Masukkan arus (A): ");
    scanf("%f", &arus);

    printf("Masukkan suhu alat (C): ");
    scanf("%f", &suhu);

    if (tegangan >= 210 && tegangan <= 230) {
        printf("Tegangan: Normal\n");
    } else {
        printf("Tegangan: TIDAK NORMAL\n");
    }

    if (arus >= 0 && arus <= 5) {
        printf("Arus: Aman\n");
    } else {
        printf("Arus: MELEBIHI BATAS\n");
    }

    if (suhu < 70) {
        printf("Suhu: Aman\n");
    } else if (suhu <= 85) {
        printf("Suhu: Waspada\n");
    } else {
        printf("Suhu: Bahaya\n");
    }

    return 0;
}
