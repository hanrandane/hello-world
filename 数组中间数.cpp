#include<stdio.h>
int main(){
	int n;
	scanf("%d",&n);
	int a[n];
	for(int b=0;b<n;b=b+1){
		scanf("%d",&a[b]);
	}
	for(int x=0,j,h;x<n-1;x=x+1){
		for(int j=x+1;j<=n-1;j=j+1){
			if(a[x]>a[j]){
				h=a[x];
				a[x]=a[j];
				a[j]=h;
			}
		} 
	int i;
	int b;
	int j=0;
	int y=0;
	if(n%2==0){
		b=n/2-1;
   }
	else{
		b=(n-1)/2;
	}
		for(i=0;i<n;i=i+1){
			if(a[b]>a[i]){
				j=j+1;
			}
			if(a[n/b]<a[i]){
				y=y+1;
			}
		} 
	if(j==y){
		printf("%d",b);
	}
	else{
	    printf("-1");
	}
     return 0;
}
}
