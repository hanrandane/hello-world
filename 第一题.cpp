#include<stdio.h>
#include<string.h>
int q(int b){
	if(b>9){
		return q(b%10)+q(b/10);
	}
	else {
		return b;
	}

}
int main(){
	int a;
	scanf("%d",&a);
	int b=10000;
	for(;b<999999;b++){
		if(b==q(b)){
		
	char bef[1000],aft[1000];
	scanf("%s",bef);
	for(int i=0;i<strlen(bef);i++){
		aft[strlen(bef)-1-i]=bef[i];
	}
	if(strcmp(bef,aft)==0)
	printf("Yes\n");
	else printf("No\n");

		}
	}

} 



