#include<stdio.h>
int main(){
	int year;
	printf("������year=");
	scanf("%d",&year);
	if(year%100==0){
		if(year%400==0){
			printf("%d������",year); 
		}
		else{
			printf("%d��ƽ��",year);	
		}
	}
	else{
		if(year%4==0){
			printf("%d������",year); 
		}
		else{
			printf("%d��ƽ��",year);
		}
	}
} 
