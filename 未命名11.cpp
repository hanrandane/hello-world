#include<stdio.h>
int main(){
	int i=1;
	int c[9];
	for(;i<=7;i++){
		int a,b;
		scanf("%d%d",&a,&b);
        c[i]=a+b;
	}
	for(int j=1;j<=8;j++){
		if(c[j]>8){
			printf("%d",j);
			break;
		}
		if(j==8) printf("0");
		
	}
	return 0;
} 
