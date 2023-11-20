#include <stdio.h>

int main () {
    int a, batas1, batas2;
    scanf("%d", &a);
    scanf("%d %d", &batas1, &batas2);
    if (a >= batas1 && a <= batas2)
    {
        printf("%d diantara %d dan %d", a, batas1, batas2);
    }
    else {
        printf("%d bukan diantara %d dan %d", a, batas1, batas2);
    }
    
}