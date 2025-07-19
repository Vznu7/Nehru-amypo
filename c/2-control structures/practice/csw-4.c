#include <stdio.h>

int main() {
    int x, x1;     
    int y, y1;     
    int z, z1;    
    scanf("%d %d", &x, &x1);
    scanf("%d %d", &y, &y1);
    scanf("%d %d", &z, &z1);
    if (x < 0 || x1 < 0 || 
        y < 0 || y1 < 0 || 
        z < 0 || z1 < 0) {
        printf("Invalid input\n");
    } else {
        int totalCost = (x * x1) + 
                        (y * y1) + 
                        (z * z1);
        printf("%d\n", totalCost);
    }

    return 0;
}