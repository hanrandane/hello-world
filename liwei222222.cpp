#include<stdio.h>
int main(){
	int m;
	int n;
	int o;
	scanf("%d%d%d",&m,&n,&o);
	int a[m],b[m];
	for(int i=0;i<m;i++){
		scanf("%d",&b[i]);
	}
		if(o==0){
			for(int i=n;i<m;i++){
			a[i]=b[i-n];
		}
		for(int i=0;i<n;i++){
			a[i]=b[i+m-n];
		}
	}
	if(o==1){
			for(int i=m-n;i<m;i++){
			a[i]=b[i-m+n];
		}
		for(int i=0;i<m-n;i++){
			a[i]=b[i+n];
		}
	}
   for(int i=0;i<m;i++){
		printf("%d",a[i]);
		if(i!=m-1)
		 printf(" ");
	}
	return 0;
	
} 
