#include<stdio.h>

int main(){
	int m,n,p,q;
	scanf("%d%d%d%d",&m,&n,&p,&q);
	int a[m][n],b[p][q];
	for(int i=0;i<m;i++){
		for(int j=0;j<n;j++){
			scanf("%d",&a[i][j]);
		}
	}
	for(int i=0;i<p;i++){
		for(int j=0;j<q;j++){
			scanf("%d",&b[i][j]);
		}
	}
	if(n==p){
		int c[m][q];
      for(int i=0;i<m;i++){
		for(int j=0;j<q;j++){
			int he=0;
	for(int t=0;t<p;t++){
		he=he+a[i][t]*b[t][j];
	}
	   c[i][j]=he;
	
		}
	}
	
	
		for(int i=0;i<m;i++){
		for(int j=0;j<q;j++){
			printf("%d ",c[i][j]);
		}
		printf("\n");
	}
	
	}
	else{
		printf("error");
	}
	
} 
