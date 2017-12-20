#include<stdio.h>
int q(int m){
	if(m<0)
	  return 0;
	else if(m==0)
	  return 1;
	else if(m==1)
	  return 1;
	else
	  return q(m-1)+q(m-2);
}
int main(){
	int n;
	scanf("%d",&n);
	int a[n];
	for(int i=0;i<n;i++){
		int m;
		scanf("%d",&m);
		m--;
		a[i]=q(m);
	}
	for(int i=0;i<n;i++){
		printf("%d\n",a[i]);
	}
	return 0;
} 
