#include<stdio.h>
int main(){
	float a,b;
	scanf("%f%f",&a,&b);
	if(a>b){
		printf("较大的数为%f",a);
	}
	else{
		printf("较大的数为%f",b);
	}
	return 0;
}
