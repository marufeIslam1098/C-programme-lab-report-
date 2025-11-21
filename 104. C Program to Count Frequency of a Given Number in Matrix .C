#include <stdio.h>

int main() {
    int r, c, x, count = 0;
    printf("Enter rows & columns: ");
    scanf("%d %d",&r,&c);

    int a[r][c];

    printf("Enter matrix:\n");
    for(int i=0;i<r;i++)
        for(int j=0;j<c;j++)
            scanf("%d",&a[i][j]);

    printf("Enter number to search: ");
    scanf("%d",&x);

    for(int i=0;i<r;i++)
        for(int j=0;j<c;j++)
            if(a[i][j] == x)
                count++;

    printf("Frequency of %d = %d\n", x, count);

    return 0;
}
