#include <stdio.h>

int main() {
    int n, flag = 1;
    printf("Enter size: ");
    scanf("%d",&n);

    int a[n][n];

    printf("Enter matrix:\n");
    for(int i=0;i<n;i++)
        for(int j=0;j<n;j++)
            scanf("%d",&a[i][j]);

    for(int i=0;i<n;i++)
        for(int j=0;j<n;j++)
            if(a[i][j] != -a[j][i])
                flag = 0;

    if(flag) printf("Skew-Symmetric Matrix\n");
    else printf("Not Skew-Symmetric\n");

    return 0;
}
