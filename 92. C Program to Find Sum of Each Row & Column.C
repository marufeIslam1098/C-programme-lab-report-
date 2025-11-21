#include <stdio.h>

int main() {
    int r, c;
    printf("Enter rows & columns: ");
    scanf("%d %d",&r,&c);

    int a[r][c];
    printf("Enter matrix:\n");
    
    for(int i=0;i<r;i++)
        for(int j=0;j<c;j++)
            scanf("%d",&a[i][j]);

    printf("Row sums:\n");
    for(int i=0;i<r;i++){
        int sum = 0;
        for(int j=0;j<c;j++)
            sum += a[i][j];
        printf("Row %d = %d\n", i+1, sum);
    }

    printf("Column sums:\n");
    for(int j=0;j<c;j++){
        int sum = 0;
        for(int i=0;i<r;i++)
            sum += a[i][j];
        printf("Column %d = %d\n", j+1, sum);
    }

    return 0;
}
