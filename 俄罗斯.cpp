#include<stdio.h>
int main(){
	int  a[15][10];
	for(int i=0;i<15;i++){
		for(int j=0;j<10;j++){
				scanf("%d",&a[i][j]);
		}
	}
	int b[4][4];
	for(int i=0;i<4;i++){
		for(int j=0;j<4;j++){
			scanf("%d",&b[i][j]);
		}
	}
	for(int i=0;i<4;i++){
	   
		for(int j=0;j<4;j++){
			if(a[i][j]==1)
				break;
			if(j==3){
				printf("hang%d",i);
			}
		}
	}
	for(int i=0;i<4;i++){
	   
		for(int j=0;j<4;j++){
			if(a[j][i]==1)
				break;
			if(j==3){
				printf("lie%d",i);
			}
		}
	}
	
	for(int i=0;i<4;i++){
		for(int j=0;j<4;j++){
			if(a[i][j]==1){
				
			}
		}
	}
	int m;
	scanf("%d",&m);
	m--;
for(int i=4;i<15;i++){
	for(int j=m;j<m+4;j++){
		if(a[i][j]==1){
			for()
		}
	}
}
	


	for(int i=0;i<15;i++){
		for(int j=0;j<10;j++){
				printf("%d",a[i][j]);
		}
	}
	

}
