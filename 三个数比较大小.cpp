#include<stdio.h>
int main(){
	float a,b,c;
	printf("��������������");
	 scanf("%f%f%f",&a,&b,&c);
	 if(a>=b){
	 	if(b>=c){
	 		printf("��С%f>%f>%f",a,b,c);
		 }
		if(a>=c){
			printf("��С%f>%f>%f",a,c,b);
		}
		else{
			printf("��С%f>%f>%f",c,a,b);
		}
	   }
	  else{
	  	if(a>=c){
	  		printf("��С%f>%f>%f",b,a,c);
		  }
		if(c>=a){
			printf("��С%f>%f>%f",c,b,a);
		}
		else{
			printf("��С%f>%f>%f",b,c,a);
		}
	  }
} 
