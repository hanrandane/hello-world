#include<stdio.h>
int main(){
	int b[4][4];
	for(int i=0;i<4;i++){
		for(int j=0;j<4;j++){
			scanf("%d",&b[i][j]);
		}
	}
	for(int i=0;i<4;i++){
	   for(int j=0;j<4;j++){
			if(b[i][j]==1)
				break;
			if(j==3){
				printf("hang%d",i);
			}
		}
	}
	for(int i=0;i<4;i++){
	   for(int j=0;j<4;j++){
			if(b[j][i]==1)
				break;
			if(j==3){
				printf("lie%d",i);
			}
		}
	}
}
