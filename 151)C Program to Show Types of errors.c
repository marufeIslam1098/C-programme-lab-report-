#include <stdio.h>

int main(){
    int a=10,b=0;
    if(b==0) printf("Runtime Error: Div by 0\n");
    else printf("%d\n",a/b);

    int x=5,y=3,sum=x-y; 
    printf("Logical Error: sum=%d\n",sum);

    return 0;
}
