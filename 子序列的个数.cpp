#include<stdio.h>
#include<string.h>
int q(char a[],char b[],int x,int y){
	for(int i=0;i<y;i++,x++){
         if(a[x]!=b[i]){
			return 0;
		}	   
		 if((i+1)==y){
	    	return 1;
		}
	}
}
int main(){
	char a[100];
	char b[100];
	gets(a);
	getchar;
	gets(b);
	getchar;
	int x=strlen(a);
	int y=strlen(b);
	int k=0;
	for(int i=0;i<x-y+1;i++){
		if(q(a,b,i,y)){
			k++;
		}
	}
	printf("%d",k);
}
