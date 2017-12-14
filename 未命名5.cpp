#include<stdio.h>
int u(int z){
	if(z<10){
		if(z==0)  printf("");
		else   printf("%d",z);
	}
	else{
     	u(z%10);
		u(z/10);
	}
}
int main(){
	int a;
	scanf("%d",&a);
	if(a<0){
		printf("-");
		a=-a;
	}
	u(a);
	return 0;	
}
