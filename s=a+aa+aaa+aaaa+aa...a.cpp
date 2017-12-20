#include<stdio.h>
int q(int a){
	if(a==1)
	  return 1;
	else
	   return q(a-1)*10;

}
int main(){
	int a,n;
	scanf("%d%d",&a,&n);
	int s=0;
	int s0=0;
	for(int i=1;i<=n;i++){
		s=s+a*q(i);
		s0=s0+s;
	}
	printf("%d",s0);
	printf("\n");
	return 0;
}
