#include<stdio.h>
#include<string.h>
int main(){
	char a[100];
	gets(a);
	int x=strlen(a);
	int y=0;
	int o=-2;
    for(int i=0;i<x;i++){
    	if(a[i]>=48&&a[i]<=57){
    		if(o!=i-1){
    			y++;
    			o=i;
			}
			else{
				o=i;
			}
 
		}
	}
	printf("%d",y);
	return 0;
}
