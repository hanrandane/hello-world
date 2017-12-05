#include<stdio.h>
void SR(int *A, int *B){
	int c=*A;
	*A=*B;
	*B=c;
	printf("%d %d",*A,*B);
}
int main(){
	int *p,*q;
	int m,n;
	scanf("%d %d",&m,&n);
	p=&m;
	q=&n;
	swapByPointer(p,q);
}
