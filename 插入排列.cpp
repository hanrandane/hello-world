#include<stdio.h>
int main(){
	int n;
	scanf("%d",&n);
	int a[n];
	for(int b=0;b<n;b=b+1)
		scanf("%d",&a[b]);
	for(int i=0,j,t;i<n;i=i+1){
		for(j=0;j<=i;j=j+1){
	   if(a[i]<a[j]){
	   	t=a[i];
	   	a[i]=a[j];
	   	a[j]=t;
	   	}
	   }
	  for(int b=0;b<=i;b=b+1){
	       printf("%d ",a[b]);
	}
	printf("\n");
	}
}
