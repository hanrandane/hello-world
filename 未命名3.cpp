#include<stdio.h>
int di(int c,int b,int k){
	int g=k;
    if(c<=9&&c>=0){
		if(c==b){
		 k++;
	    }
	}
	else  {
    k=k+di(c/10,b,g);
    k=k+di(c%10,b,g);
}
   return k;
}
int main(){
	int p=0;
	int a,b;
	scanf("%d%d",&a,&b);
	for(int m=1;m<=a;m++){
		p=p+di(m,b,0);
  }
	printf("%d",p);
	return 0;
}
