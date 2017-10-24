#include<stdio.h>
#include<math.h> 
int main(){
	float a,b;
	scanf("%f%f",&a,&b);
	bool x= fabs(a-b)<1e-6;
	if(x=0){
		printf("%f与%f不相等",a,b);
	}
	else{
		printf("%f与%f相等",a,b);
	}
	return 0;
}
