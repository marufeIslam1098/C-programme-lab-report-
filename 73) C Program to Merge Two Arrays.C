#include <stdio.h>

int main(){
    int n1; scanf("%d",&n1); int a[n1];
    for(int i=0;i<n1;i++) scanf("%d",&a[i]);
    int n2; scanf("%d",&n2); int b[n2];
    for(int i=0;i<n2;i++) scanf("%d",&b[i]);
    int n3 = n1 + n2; int c[n3];
    for(int i=0;i<n1;i++) c[i]=a[i];
    for(int i=0;i<n2;i++) c[n1+i]=b[i];
    for(int i=0;i<n3;i++) printf("%d ", c[i]);
    printf("\n");
    return 0;
}
