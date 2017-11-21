#include<stdio.h>
int main(){
	int n;
	scanf("%d",&n);
	int a[n];
	for(int b=0;b<n;b=b+1)
		scanf("%d",&a[b]);
	for(int i=0,j,h;i<n-1;i=i+1){
		for(int j=i+1;j<=n-1;j=j+1){
			if(a[i]>a[j]){
				h=a[i];
				a[i]=a[j];
				a[j]=h;
			}
		} 
		for(int b=0;b<n;b=b+1){
	       printf("%d ",a[b]);

		   }
		printf("\n");
	}
} 
