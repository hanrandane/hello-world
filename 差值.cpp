#include<stdio.h>
#include<string.h>
int main(){
	char a[100],b[100];
	scanf("%s",&a);
	scanf("%s",&b);
	int la=strlen(a);
	int lb=strlen(b);
	int i=0;
	for(;a[i]==b[i]&&i<la&&i<lb;i++){
		i=i;
	}
	if(i==la-1&&i==lb-1){
		printf("0");
	}
	else{
		int y;
	     y=a[i]-b[i];
		printf("%d",y);
	}
	printf("\n");
}
