#include <stdio.h>

int main() {
    float daya;
    printf("Masukkan daya (Watt): ");
    scanf("%f", &daya);

    if (daya < 100) {
        printf("Daya Rendah\n");
    } else {
        if (daya <= 500) {
            printf("Daya Sedang\n");
        } else {
            printf("Daya Tinggi\n");

            if (daya > 1000) {
                printf("PERLU PROTEKSI TAMBAHAN\n");
            }
        }
    }

    return 0;
}
