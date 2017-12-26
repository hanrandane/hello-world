#include<stdio.h>
#include<string.h>
int main(){
	char a[100];
	char b[100];
	gets(a);
	getchar;
	gets(b);
	getchar;
	int x=strlen(a);
	int y=strlen(b);
	if(x<=y)
	   x=y;
    int i=0;
	for(;i<x;i++){
		if(a[i]!=b[i]){
			printf("%d",a[i]-b[i]);
			break;
		} 
	}
	if(i==x)
	   printf("0");
}
