#include <stdio.h>

int main() {
    int r, c, p;
    printf("Enter r c p: ");
    scanf("%d %d %d",&r,&c,&p);

    int a[r][c], b[c][p], m[r][p];

    printf("Enter first matrix:\n");
    for(int i=0;i<r;i++)
        for(int j=0;j<c;j++)
            scanf("%d",&a[i][j]);

    printf("Enter second matrix:\n");
    for(int i=0;i<c;i++)
        for(int j=0;j<p;j++)
            scanf("%d",&b[i][j]);

    for(int i=0;i<r;i++){
        for(int j=0;j<p;j++){
            m[i][j] = 0;
            for(int k=0;k<c;k++)
                m[i][j] += a[i][k] * b[k][j];
        }
    }

    printf("Result matrix:\n");
    for(int i=0;i<r;i++){
        for(int j=0;j<p;j++)
            printf("%d ", m[i][j]);
        printf("\n");
    }

    return 0;
}
