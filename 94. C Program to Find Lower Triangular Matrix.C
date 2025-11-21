#include <stdio.h>

int main() {
    int n;
    printf("Enter size: ");
    scanf("%d",&n);

    int a[n][n];
    printf("Enter matrix:\n");

    for(int i=0;i<n;i++)
        for(int j=0;j<n;j++)
            scanf("%d",&a[i][j]);

    printf("Lower Triangular:\n");
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            if(i < j)
                printf("0 ");
            else
                printf("%d ", a[i][j]);
        }
        printf("\n");
    }

    return 0;
}
