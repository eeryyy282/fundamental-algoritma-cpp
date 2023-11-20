#include <stdio.h>

int main() {
    int angka_pertama, angka_kedua;
    printf("Perhitungan Shift Left\n");
    printf("Masukkan angka pertama =");
    scanf("%d", &angka_pertama);
    printf("Masukkan angka kedua =");
    scanf("%d", &angka_kedua);
    printf("Hasil Shift Left = %d", angka_pertama<<angka_kedua);
    return 0;
}