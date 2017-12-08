#include<stdio.h>
int findString(char stringArray[][100],char *targetString,int n){
	int m=0;
	for(int i=1;i<=n;i++){
		if(stringArray[i][100]==*targetString)
		   m++;
	}
	  return m;
}
int main(){
	int a;
	scanf("%d",&a);
	char b[a][100];
	for(int i=1;i<=a;i++){
		scanf("%s",&b[i][100]);
	}
	char c;
	scanf("%s",c);
	char *d=&c;
	printf("%d",findString(b,d,a));
}
//其中stringArray为字符串数组，
//targetString为要找的字符串，
//n是输入的字符串个数，
//返回值是目标字符串出现的次数。
