#include<stdio.h>
int main(){
	int n;
	scanf("%d",&n);
	int a[n+1][n+1];
	for(int i=0;i<n+1;i++){
		a[i][0]=0;
		a[0][i]=0;
	}
	a[1][1]=1;
	int i=1;
	int j=1;
	int t=1;
	while(t<(n*n+n)/2){
		i++;
		t++;
		a[i][j]=t;
		i--;
		j++;
		t++;
		while(i!=0){
			a[i][j]=t;
			i--;
			j++;
			t++;
		}
		i++;
		j--;
		t--;
	    int h=j;
	    j=i;
	    i=h;
	}
	int r=n+1;
	for(int i=1;i<n+1;i++){
		for(int j=1;j<r;j++){
			printf("%d ",a[i][j]);
		}
		printf("\n");
		r--;
	}
	return 0;
	
} 
