#include<stdio.h>
int qu(int a[],int m,int n){
	if(n==1){
		printf("%d",a[n-1]);
	}
	else
	  qu(a,m,n-1);
}
int main(){
	int k;
	scanf("%d",&k);
	for(int i=0;i<k;i++){
		int m;
		scanf("%d",&m);
		int a[m];
		for(int j=0;j<m;j++){
			scanf("%d",&a[j]);
		}
		qu(a,m,m);
		
	}
}
