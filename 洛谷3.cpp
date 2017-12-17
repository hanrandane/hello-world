#include<stdio.h>
int main(){
	int a[10];
	for(int i=0;i<=9;i++){
		scanf("%d",&a[i]);
	}
	int b;
	scanf("%d",&b);
	b=b+30;
	int q=0;
	for(int i=0;i<=9;i++){
		if(a[i]<=b){
			q++;
		}
	}
	printf("%d",q);
}
