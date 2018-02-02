#include<stdio.h>
int determ(int n, int a[][n]);
int main(){
	
	int n=3;
//	scanf("%d",&m);
	
	int a[n][n];

	printf("%d",determ(n,a) );
	

	return 0;	
}

int determ(int n,int a[][n]){
	int b[n][n];
	int i,j,k,c1,c2;
	int sign = 1;
	int det= 0;
	//LOGIC FOR 2x2 matrix determine
	if(n == 2){
		det = (a[0][0]*a[1][1])-(a[1][0]*a[0][1]);
		return det;
	}else{
		for (int i = 0; i < n; ++i)// Controls the expansion row
		{
			c1 = 0,c2 = 0 ;//  row and column of minor matrix
			for (int j = 0; j < n; ++j)//Controls the matrix of minor matrix
			{
				for (int k = 0; k < n; ++k)//Controls column of minor matrix
				{
					if(j != 0 && k != i){
						b[c1][c2] =a[j][k];
						c2++;
						if(c2>(n-2)){
							c1++;
							c2 = 0;
						}
					}
				}
				
				
			}
			
			det += sign * a[0][j] * determ(n - 1, b);
			
			sign = -sign;
		}
	}

	return det;
}
