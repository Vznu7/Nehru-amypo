// it contains the code without using pointers
#include <stdio.h>

int main() {
    int n;
    if(scanf("%d", &n)!=1||n<0||n>1000)
    {
        printf("Invalid Input\n");
        return 0;
    }
    int a[n], b[n], result[n];
    for (int i = 0; i < n; i++) {
        if (scanf("%d", &a[i])!=1||a[i] < -1000 || a[i] > 1000)
         {
            printf("Element not in Range\n");
            return 0;
        }
    }

 
    for (int i = 0; i < n; i++) {
        if (scanf("%d", &b[i])!=1||b[i] < -1000 || b[i] > 1000) 
        {
            printf("Element not in Range\n");
            return 0;
        }
    }

  
    for (int i = 0; i < n; i++) {
        result[i] = a[i] - b[i];
    }

    
    for (int i = 0; i < n; i++) {
        printf("%d ", result[i]);
    }
    printf("\n");

    return 0;
}