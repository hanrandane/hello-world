#include<stdio.h>
int main(){ 
	for(int a=100;a<=9999;a++){
		int c=0;
		int d=0;
		int e=1;
		int f=0;
		for(int b=10;a>=1;){
	     c=a%10;
         a=a/10;
	     d=d+c;
	     e=e*c;
	    f=f+c*c;
    }	 
	for(int g=2;g<a;g++){
	 	if(a%g==0){
			goto LOOP ;
		}
	 } 	 //怎么实现她跳出来以后判断 
	 for(int g=2;g<d;g++){
	 	if(d%g==0){
			goto LOOP;
		}
	 } 	 
	 for(int g=2;g<e;g++){
	 	if(e%g==0){
			goto LOOP;
		}
	 } 
	 for(int g=2;g<f;g++){
	 	if(a%f==0){
			goto LOOP;
		}
	 } 
	 printf("%d\t",a);
	 LOOP：continue;
}
}
