#include<stdio.h>
int main(){
	float a,b,c;
	printf("请输入三个数：");
	 scanf("%f%f%f",&a,&b,&c);
	 if(a>=b){
	 	if(b>=c){
	 		printf("大小%f>%f>%f",a,b,c);
		 }
		if(a>=c){
			printf("大小%f>%f>%f",a,c,b);
		}
		else{
			printf("大小%f>%f>%f",c,a,b);
		}
	   }
	  else{
	  	if(a>=c){
	  		printf("大小%f>%f>%f",b,a,c);
		  }
		if(c>=a){
			printf("大小%f>%f>%f",c,b,a);
		}
		else{
			printf("大小%f>%f>%f",b,c,a);
		}
	  }
} 
