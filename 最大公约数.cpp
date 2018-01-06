#include<stdio.h>
int main(){
	long a;
	scanf("%d",&a);
	long b;
	scanf("%d",&b);
		long i=1;
      for(int j=2;j<=a&&j<=b;j++){
      	if(a%j==0&&b%j==0){
      		a=a/j;
      		b=b/j;
      		i=i*j;
      		j--;
		  }
	  }
	  printf("%d",i);
	return 0;
}
