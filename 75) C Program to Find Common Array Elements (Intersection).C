#include <stdio.h>
#include <stdlib.h>

// simplest: sort both and two-pointer
int cmp(const void *p, const void *q){ return (*(int*)p - *(int*)q); }

int main(){
    int n1; scanf("%d",&n1); int a[n1];
    for(int i=0;i<n1;i++) scanf("%d",&a[i]);
    int n2; scanf("%d",&n2); int b[n2];
    for(int i=0;i<n2;i++) scanf("%d",&b[i]);
    qsort(a,n1,sizeof(int),cmp);
    qsort(b,n2,sizeof(int),cmp);
    int i=0,j=0;
    while(i<n1 && j<n2){
        if(a[i]==b[j]){ printf("%d ", a[i]); i++; j++; }
        else if(a[i]<b[j]) i++; else j++;
    }
    printf("\n");
    return 0;
}
