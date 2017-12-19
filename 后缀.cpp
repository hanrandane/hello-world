#include<stdio.h>
#include<string.h>
int main(){
	char a[1000],b[1000];
	scanf("%s%s",&a,&b);
	int la=strlen(a);
	int lb=strlen(b);
	if(a[la-1]!=b[lb-1]){
		printf("null");
	}
	else{
		char c[1000];
		int i=0;
		for(;a[la-1]==b[lb-1];la--,lb--,i++){
			c[i]=a[la-1];
		}
		i--;
		for(;i>=0;i--){
			printf("%c",c[i]);
		}
	}
	
}
