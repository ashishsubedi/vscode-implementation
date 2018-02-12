#include<stdio.h>
int main(){
    int r1,c1,r2,c2;
    int i,j,k,sum=0;
    scanf("%d %d",&r1,&c1);
    int a[r1][c1];
    for(int i=0; i<r1;i++){
        for(int j = 0; j< c1; j++){
            scanf("%d",&a[i][j]);
        }
    }
    scanf("%d %d", &r2, &c2);
    int b[r2][c2];
    int m[r1][c2];
    for (int i = 0; i < r2; i++)
    {
        for (int j = 0; j < c2; j++)
        {
            scanf("%d", &b[i][j]);
        }
    }
    if(c1!= r1){
        printf("matrix cannot be multiplied. Try again\n");
        main();
    }
    
    // Matrix Multiplication
    for(i=0;i<r1; i++){
        //sum = 0;
        for(j=0;j<c2;j++){
            for(k=0;k<r2;k++){
                sum+= a[i][k]*b[k][j];
            }
            m[i][j] = sum;
            sum = 0;
        }
        
    }
    for (int i = 0; i < r1; i++)
    {
        for (int j = 0; j < c2; j++)
        {
            printf("%d\t", m[i][j]);
        }
        printf("\n");
    }

    

    return 0;
}