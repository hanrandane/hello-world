#include<stdio.h>
#include<string.h>
#define N 1000

int main(){
	char mid[N];
	char store[N][N];
	int row = 0;
	
	printf("���룺\n");
	for( ; ; row ++){
		fgets(mid, N, stdin);
		if(!strcmp(mid, "end of file\n"))
		break;
		
		strncpy(store[row], mid, strlen(mid) - 1);
	}
	
	printf("�浽����������\n");
	for(int i = 0; i < row; i ++){
		for(int j = 0; j < strlen(store[i]); j ++)
		printf("%c",store[i][j]);
		printf("\n");
	}
	
	return 0;
}
