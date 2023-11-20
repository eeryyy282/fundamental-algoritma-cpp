#include <stdio.h>

int main() {
    printf("Mencoba Menggunakan Ternary IF\n");
    int umur = 30;
    printf("Umur anda merupakan angka %s", (umur%2==1? "Ganjil":"Genap"));
    return 0;
}