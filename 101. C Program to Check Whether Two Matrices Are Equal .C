#include <stdio.h>

int main() {
    int r, c, flag = 1;
    printf("Enter rows & columns: ");
    scanf("%d %d", &r, &c);

    int a[r][c], b[r][c];

    printf("Enter first matrix:\n");
    for(int i=0;i<r;i++)
        for(int j=0;j<c;j++)
            scanf("%d", &a[i][j]);

    printf("Enter second matrix:\n");
    for(int i=0;i<r;i++)
        for(int j=0;j<c;j++)
            scanf("%d", &b[i][j]);

    for(int i=0;i<r;i++)
        for(int j=0;j<c;j++)
            if(a[i][j] != b[i][j])
                flag = 0;

    if(flag) printf("Matrices are Equal\n");
    else printf("Matrices are Not Equal\n");

    return 0;
}
