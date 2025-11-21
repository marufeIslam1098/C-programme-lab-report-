#include <stdio.h>

int main() {
    int r, c, pos=0, neg=0;
    printf("Enter rows & columns: ");
    scanf("%d %d",&r,&c);

    int a[r][c];

    printf("Enter matrix:\n");
    for(int i=0;i<r;i++){
        for(int j=0;j<c;j++){
            scanf("%d",&a[i][j]);
            if(a[i][j] > 0) pos++;
            else if(a[i][j] < 0) neg++;
        }
    }

    printf("Positive = %d\nNegative = %d\n", pos, neg);

    return 0;
}
