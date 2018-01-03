#include<stdio.h>
#include<string.h>
int main(){
	char a[1000],b[1000];                                  
	gets(a);
    gets(b);
	int la=strlen(a);
	int lb=strlen(b);
	if(la==0||lb==0){
		printf("null\n");
	}
	else{
	if(a[la-1]!=b[lb-1]){
		printf("null\n");
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
	return 0;
}
