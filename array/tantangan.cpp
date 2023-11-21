#include <stdio.h>
#include <string.h>

int main() {
    char kata [100];
    scanf("%[^\n]", kata);
    getchar();
    
    int panjang = strlen(kata);

    for(int i = 0; i < panjang; i++) {
        if(kata[i] >= 97 && kata[i] <= 122) {
            kata[i] -= 32;
        }
    }

    printf("%s", kata);
    return 0;
}