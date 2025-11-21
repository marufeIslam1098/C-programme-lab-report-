#include <stdio.h>

int main() {
    int r, c, even = 0, odd = 0;
    printf("Enter rows & columns: ");
    scanf("%d %d", &r, &c);

    int a[r][c];
    printf("Enter matrix:\n");

    for(int i=0;i<r;i++){
        for(int j=0;j<c;j++){
            scanf("%d",&a[i][j]);
            if(a[i][j] % 2 == 0) even++;
            else odd++;
        }
    }

    printf("Even = %d\nOdd = %d\n", even, odd);

    return 0;
}
