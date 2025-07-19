#include <stdio.h>

int main() {
    int m, n, p, q;
    scanf("%d %d", &m, &n);
    int A[m][n];
    for (int i = 0; i < m; i++)
        {for (int j = 0; j < n; j++){
            scanf("%d", &A[i][j]);}
            printf("\n");
        }
    
    scanf("%d %d", &p, &q);
    int B[p][q];
    for (int i = 0; i < p; i++)
        {    for (int j = 0; j < q; j++){
            scanf("%d", &B[i][j]);}
            printf("\n");
        }
    
    if (n != p) {
        printf("Invalid input\n");
        return 0;
    }
    
    int C[m][q];
     for(int i= 0;i<m;i++)
     {
         for(int j =0;j<q;j++)
         {
             C[i][j] =0;
             for(int k =0;k<n;k++)
             {
                 C[i][j]+=A[i][k]*B[k][j];
             }
         }
     }
     
     
     for(int i =0;i<m;i++)
     {
         for(int j=0;j<q;j++)
         {
             printf("%d ",C[i][j]);
         }
         printf("\n");
     }
     
}