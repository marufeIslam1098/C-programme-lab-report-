#include <stdio.h>

int main() {
    int r, c, count = 0;
    printf("Enter rows & columns: ");
    scanf("%d %d", &r, &c);

    int a[r][c];
    printf("Enter matrix:\n");
    for(int i=0;i<r;i++)
        for(int j=0;j<c;j++)
            scanf("%d", &a[i][j]);

    int total = r * c;

    for(int i=0;i<r;i++)
        for(int j=0;j<c;j++)
            if(a[i][j] == 0)
                count++;

    if(count > total/2)
        printf("Sparse Matrix\n");
    else
        printf("Not a Sparse Matrix\n");

    return 0;
}
