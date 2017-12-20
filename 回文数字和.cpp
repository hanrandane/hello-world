#include<stdio.h>
#include<string.h>
int w(int b){
	if(b>9){
		return w(b%10)+w(b/10);
	}
	else {
		return b;
	}
}
int main(){
	int a;
	scanf("%d",&a);
	int b=10000;
	int t=0;
	for(;b<=999999;b++){
	if(a==w(b)){
	char bef[1000],aft[1000];
	sprintf(bef, "%d", b);  
	for(int i=0;i<strlen(bef);i++){
		aft[strlen(bef)-1-i]=bef[i];
	}
	if(strcmp(bef,aft)==0){
          printf("%d\n",b);
          t++;
	}
	}
	}
	if(t==0)
	   printf("-1\n");

	return 0;
} 



