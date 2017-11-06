#include <stdio.h>
int main(){
	int n;
	int a=0;
	scanf("%d",&n);
	for(;n>=1;n--){
		int n1=n;
    	for(int b=10;n1%b!=n1;b=b*10){
    		if(n1/b==1){
    			a=a+1;
			}
		   	if(n1%b==1){
			  a=a+1	;
		}
		   n1=n1-(n1%b);
		
	} 
}
    printf("f(n)=%d",a+1);
}
