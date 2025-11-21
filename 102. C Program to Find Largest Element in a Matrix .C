#include <stdio.h>

int main() {
    int r, c;
    printf("Enter rows & columns: ");
    scanf("%d %d",&r,&c);

    int a[r][c], max;

    printf("Enter matrix:\n");
    for(int i=0;i<r;i++)
        for(int j=0;j<c;j++)
            scanf("%d",&a[i][j]);

    max = a[0][0];

    for(int i=0;i<r;i++)
        for(int j=0;j<c;j++)
            if(a[i][j] > max)
                max = a[i][j];

    printf("Largest element = %d\n", max);

    return 0;
}
