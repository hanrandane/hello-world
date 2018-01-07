#include<stdio.h>
int main(){
	int m,n;
	scanf("%d%d",&m,&n);
	int a[m+2][n+2];
	for(int i=0;i<m+2;i++){
		for(int j=0;j<n+2;j++){
			a[i][j]=0;
		}
	}
	for(int i=0;i<m+2;i++){
		a[i][0]=-1;
		a[i][n+1]=-1;
	}
	for(int i=0;i<n+2;i++){
		a[0][i]=-1;
		a[m+1][i]=-1;
	}
	int t=2;
	int i=1,j=1;
	a[1][1]=1;
	while(t<=m*n){
		if(a[i][j+1]!=-1){
			j++;
			a[i][j]=t;
			t++;
			i++;
			j--;
		}
		else{
			i++;
			a[i][j]=t;
			t++;
			i++;
			j--;
		}
		while(a[i][j]!=-1){
			a[i][j]=t;
			i++;
			j--;
			t++;
		}
		i--;
		j++;
		if(a[i+1][j]!=-1){
			i++;
			a[i][j]=t;
			t++;
			i--;
			j++;
		}
		else{
			j++;
			a[i][j]=t;
			i--;
			j++;
			t++;
		}
		while(a[i][j]!=-1){
				a[i][j]=t;
			t++;
			i--;
			j++;
		}
		i++;
		j--;
	}
	for(int q=1;q<m+1;q++){
		for(int p=1;p<n+1;p++){
			printf("%d",a[q][p]);
			if(p<n)
			printf(" ");
		}
		printf("\n");
	}
	
} 
