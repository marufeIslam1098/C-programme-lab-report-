#include <stdio.h>

int main() {
    int r, c;
    printf("Enter rows & columns: ");
    scanf("%d %d",&r,&c);

    int a[r][c];
    int maxSum = -99999, colIndex = 0;

    printf("Enter matrix:\n");
    for(int i=0;i<r;i++)
        for(int j=0;j<c;j++)
            scanf("%d",&a[i][j]);

    for(int j=0;j<c;j++){
        int sum = 0;
        for(int i=0;i<r;i++)
            sum += a[i][j];

        if(sum > maxSum){
            maxSum = sum;
            colIndex = j;
        }
    }

    printf("Column with max sum = %d (Sum = %d)\n", colIndex+1, maxSum);

    return 0;
}
