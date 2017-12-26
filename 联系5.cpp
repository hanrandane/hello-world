#include<stdio.h>
#include<string.h>
int w(char a[],int i){
	if(a[i]>=48&&a[i]<=57)
		return 1;
	return 0;
}
int main(){
	char a[100];
	scanf("%s",&a);
	int x=strlen(a);
	int j=0;
	for(int i=0;i<x;i++){
		if(a[i]>=48&&a[i]<=57){
			j++;
			int k=i+1;
		   while(w(a,k)){
		   	i++;
		   }
		}
	}
	return 0;
}
