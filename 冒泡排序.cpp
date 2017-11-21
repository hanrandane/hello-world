#include<stdio.h>
int main(){
	int n;
	scanf("%d",&n);
	int a[n];
	for(int i=0;i<=n-1;i=i+1){
		scanf("%d",&a[i]);
	}
	for(int i=n-1;i>=1;i=i-1){
		for(int j=i-1;j>=0;j=j-1){
			if(a[i]<a[j]){
				int zhong=a[i];
				a[i]=a[j];
				a[j]=zhong;
			}
	    }
	   for(int k=0;k<=n-1;k=k+1){
	      printf("%d ",a[k]);
	   }
	   printf("\n");
	}
	return 0;
}
