#include <stdio.h>
#include <stdlib.h>

int cmp(const void *p,const void *q){ return (*(int*)p - *(int*)q); }

int main(){
    int r,c; scanf("%d %d",&r,&c);
    int a[r][c];
    for(int i=0;i<r;i++) for(int j=0;j<c;j++) scanf("%d",&a[i][j]);
    for(int i=0;i<r;i++) qsort(a[i], c, sizeof(int), cmp);
    for(int i=0;i<r;i++){
        for(int j=0;j<c;j++) printf("%d ", a[i][j]);
        printf("\n");
    }
    return 0;
}
