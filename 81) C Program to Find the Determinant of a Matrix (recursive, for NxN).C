#include <stdio.h>
#include <stdlib.h>

double determinant(double **mat, int n){
    if(n==1) return mat[0][0];
    if(n==2) return mat[0][0]*mat[1][1] - mat[0][1]*mat[1][0];
    double det = 0;
    for(int p=0;p<n;p++){
        // build minor
        double **minor = malloc((n-1)*sizeof(double*));
        for(int i=0;i<n-1;i++) minor[i]=malloc((n-1)*sizeof(double));
        for(int i=1;i<n;i++){
            int colIndex = 0;
            for(int j=0;j<n;j++){
                if(j==p) continue;
                minor[i-1][colIndex++] = mat[i][j];
            }
        }
        double sign = (p%2==0)? 1 : -1;
        det += sign * mat[0][p] * determinant(minor, n-1);
        for(int i=0;i<n-1;i++) free(minor[i]);
        free(minor);
    }
    return det;
}

int main(){
    int n; scanf("%d",&n);
    double **mat = malloc(n*sizeof(double*));
    for(int i=0;i<n;i++){ mat[i]=malloc(n*sizeof(double));
        for(int j=0;j<n;j++) scanf("%lf",&mat[i][j]);
    }
    double det = determinant(mat, n);
    printf("Determinant = %.6g\n", det);
    for(int i=0;i<n;i++) free(mat[i]);
    free(mat);
    return 0;
}
