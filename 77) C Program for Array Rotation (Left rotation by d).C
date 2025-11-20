#include <stdio.h>
#include <stdlib.h>

void leftRotate(int a[], int n, int d){
    d = d % n;
    int *tmp = malloc(d * sizeof(int));
    for(int i=0;i<d;i++) tmp[i]=a[i];
    for(int i=0;i<n-d;i++) a[i]=a[i+d];
    for(int i=0;i<d;i++) a[n-d+i]=tmp[i];
    free(tmp);
}

int main(){
    int n; scanf("%d",&n); int a[n];
    for(int i=0;i<n;i++) scanf("%d",&a[i]);
    int d; scanf("%d",&d);
    leftRotate(a,n,d);
    for(int i=0;i<n;i++) printf("%d ", a[i]);
    printf("\n");
    return 0;
}
