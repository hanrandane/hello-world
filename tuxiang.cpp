#include<stdio.h>
int main(){
	char a[6][10]={{"--**-**--"},
	{"-*--*--*-"},
	{"-*-----*-"},
	{"--*---*--"},
	{"---*-*---"},
	{"----*----"}};
	int m,n;
	scanf("%d%d",&m,&n);
	if(n<1||n>5||m<1||m>5){
		printf("Input Error");
	}
	else{
	for(int q=1;q<=m;q++){
	 for(int j=0;j<6;j++){
	 	for(int h=1;h<=n;h++){
		for(int i=0;i<9;i++){
			printf("%c",a[j][i]);
		}
	}
	printf("\n");
	}
}
}

}
