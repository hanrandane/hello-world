#include<stdio.h>
int main(){
	int n;
	scanf("%d",&n);
	int a[10],c[10];
	for(int b=0;b<10;b=b+1){
		scanf("%d",&a[b]);
	}
	for(int i=0,j=n;i<m-n;i=i+1,j=j+1){
		c[i]=a[j];
	}
	for(int i=m-n,j=0;i<m;i=i+1,j=j+1){
		c[i]=a[j];
	}
	for(int b=0;b<10;b=b+1){
		printf("%d ",c[b]);
	}
}

