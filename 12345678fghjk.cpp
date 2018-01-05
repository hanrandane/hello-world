#include<stdio.h>
int main(){
	int y[4];
	for(int i=0;i<4;i++)
	scanf("%d",&y[i]);

	for(int k=0;k<la+lb;k++){
		int e=(y[k]/10);
			y[k]=(y[k]%10);
			y[k+1]=y[k+1]+e;
	}

}
