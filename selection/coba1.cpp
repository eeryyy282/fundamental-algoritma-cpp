#include <stdio.h>

int main() {
    printf("Percobaan Statement IF\n");
    int suhu = 30;
    if (suhu >= 40) {
        printf("Suhu sekarang sangat panas");
    }
    
    else if (suhu <= 30) {
        printf("Suhu sekarang tidak terlalu panas");
    }
    else {
        printf("Suhu normal dan aman");
    }
    return 0;
}