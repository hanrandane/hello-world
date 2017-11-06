#include<stdio.h>
int main(){
	int year;
	printf("请输入year=");
	scanf("%d",&year);
	if(year%100==0){
		if(year%400==0){
			printf("%d是闰年",year); 
		}
		else{
			printf("%d是平年",year);	
		}
	}
	else{
		if(year%4==0){
			printf("%d是闰年",year); 
		}
		else{
			printf("%d是平年",year);
		}
	}
} 
