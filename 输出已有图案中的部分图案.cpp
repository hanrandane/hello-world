#include<stdio.h>//�ӵ�0����ʼ 
int main(){
	int x,y,w,h;
	scanf("%d%d%d%d",&x,&y,&w,&h); //��x�е�y�п�ʼ��w��h�� 
	char a[100][100]={"--**-**--",
                   "-*--*--*-",
                   "-*-----*-",
                   "--*---*--",
                   "---*-*---",
                   "----*----"};
    int r=x;
	if(1<=x&&x<=9&&1<=y&&y<=6&&1<=w&&w<=9&&1<=h&&h<=6&&2<=x+w&&x+w<=10&&2<=y+h&&y+h<=7){
		for(int i=0;i<h;i++,y++){
		for(int j=0;j<w;j++,x++){
			printf("%c",a[y-1][x-1]);
		}
		x=r;
		if(i<h-1)
		printf("\n");
	}
	}
	else{
		printf("Input Error\n");
	}
} 
