#include <stdio.h>
#include <math.h>

int main(){
    int r,c; scanf("%d %d",&r,&c);
    double sumsq = 0.0;
    double trace = 0.0;
    double val;
    double mat[r][c];
    for(int i=0;i<r;i++){
        for(int j=0;j<c;j++){
            scanf("%lf",&mat[i][j]);
            sumsq += mat[i][j]*mat[i][j];
            if(i==j) trace += mat[i][j];
        }
    }
    double frob = sqrt(sumsq);
    printf("Trace = %.6g\nFrobenius norm = %.6g\n", trace, frob);
    return 0;
}
