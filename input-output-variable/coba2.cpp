#include<stdio.h>

int main() {
    char nama[30];
    printf("Mencoba Input\n");
    printf("Masukkan nama kamu =");
    scanf("%s", &nama);
    getchar();
    printf("Nama Kamu = %s\n", nama);
    printf("GetChar digunakan untuk mengambil karakter");  
    return 0;
}