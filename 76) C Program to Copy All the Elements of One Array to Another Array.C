#include <stdio.h>
#include <string.h>

int main(){
    int n; scanf("%d",&n); int a[n], b[n];
    for(int i=0;i<n;i++) scanf("%d",&a[i]);
    // copy
    for(int i=0;i<n;i++) b[i]=a[i];
    // or memcpy(b,a,n*sizeof(int));
    for(int i=0;i<n;i++) printf("%d ", b[i]);
    printf("\n");
    return 0;
}
