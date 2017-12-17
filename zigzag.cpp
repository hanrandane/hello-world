#include<stdio.h>
int q(int n,int u[n],int m){//m cishu
	if(m==n-1){
		printf("-->\n");
	}
	else{
	for(int i=n-m;i<n-1;i++){
		printf("-->%d",u[i]);
	  for(int j=i+1;j<n-1;j++){
	  	printf("%d ",u[j]);
	  }
	  printf("\n");
	  }
		
	}
	
}
int main(){
	int m,n;
	scanf("%d",&m);
	for(int i=0;i<m;i++){
		scanf("%d",&n);
		int a[n];
		for(int j=0;j<n;j++){
			scanf("%d",&a[j]);
		}
		
	}
	return 0;
}

