#include<stdio.h>
int main(){
	int n;
	scanf("%d",&n);
	n++;
	int i=1;
	int j=1;
	int a[n][n];
	a[1][1]=1;
	for(;i<n-1;i++){
		for(;j<n-1;j++){
			a[i][j+1]=a[i][j]+j+i;
		}
		j=1;
		a[i+1][j]=a[i][j]+i;
	}
	i=1;
	j=1;
	for(;i<n;i++){
		for(;j<n;j++){
	printf("%d",a[i][j]);
		if(i+j<6)
		  printf(" ");
		if(i+j==6)
		 break;	
	
	}
	    if(i<n-1)
		printf("\n");
		j=1;
	}
	return 0;
} 
