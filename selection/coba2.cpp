#include <stdio.h>

int main () {
    printf("Coba Statement Switch Case\n");
    int nilai = 90;
    switch (nilai)
    {
    case 100:
        printf("Nilai Sempurna!");
        break;
    case 90:
        printf("Kurang 10 lagi tuh!");
        break;
    case 80:
        printf("Lumayan lah");
    default:
        printf("Kerja Bagus!");
        break;
    }
    return 0;
}