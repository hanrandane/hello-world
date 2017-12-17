#include<stdio.h>
int main(){
	int a;
	int b;
	double sum=1;
	scanf("%d",&a);
	b=1;
	while(sum<=a){
		b++;
		sum=sum+(1.00/b);
	}
	printf("%d",b);
	return 0;
}
