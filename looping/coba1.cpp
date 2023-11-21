#include <stdio.h>
int main() {
    for (int i = 0; i < 10; i++) {
        printf("%d\n", i);
        if (i == 9)
        {
            printf("Perulangan selesai pada %d\n", i);
            break;
        }
        
    }

    int j = 0;
    while (j <= 10)
    {
        printf("%d\n", j);
        j++;
    }
    
    
    int k = 10;
    do
    {
        printf("%d\n", k++);
    } while (k <= 10);
    

    return 0;
}